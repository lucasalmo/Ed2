#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEYS 3 // Ordem da árvore B (número máximo de chaves por nó)

typedef struct BTreeNode {
    char *keys[MAX_KEYS];        // Chaves armazenadas (palavras)
    struct BTreeNode *children[MAX_KEYS + 1]; // Filhos do nó
    int numKeys;                 // Número atual de chaves no nó
    int isLeaf;                  // Indica se o nó é folha
} BTreeNode;

// Função para criar um novo nó
BTreeNode* createBTreeNode(int isLeaf) {
    BTreeNode *node = (BTreeNode *)malloc(sizeof(BTreeNode));
    node->numKeys = 0;
    node->isLeaf = isLeaf;
    for (int i = 0; i < MAX_KEYS + 1; i++) {
        node->children[i] = NULL;
    }
    return node;
}

// Função para dividir um nó cheio
void splitChild(BTreeNode *parent, int i) {
    BTreeNode *fullChild = parent->children[i];
    BTreeNode *newChild = createBTreeNode(fullChild->isLeaf);

    newChild->numKeys = MAX_KEYS / 2;

    // Copia as últimas chaves para o novo nó
    for (int j = 0; j < MAX_KEYS / 2; j++) {
        newChild->keys[j] = fullChild->keys[j + MAX_KEYS / 2 + 1];
    }

    if (!fullChild->isLeaf) {
        // Copia os filhos também
        for (int j = 0; j <= MAX_KEYS / 2; j++) {
            newChild->children[j] = fullChild->children[j + MAX_KEYS / 2 + 1];
        }
    }

    fullChild->numKeys = MAX_KEYS / 2;

    // Move os filhos do pai para dar espaço
    for (int j = parent->numKeys; j >= i + 1; j--) {
        parent->children[j + 1] = parent->children[j];
    }
    parent->children[i + 1] = newChild;

    // Move as chaves do pai para dar espaço
    for (int j = parent->numKeys - 1; j >= i; j--) {
        parent->keys[j + 1] = parent->keys[j];
    }
    parent->keys[i] = fullChild->keys[MAX_KEYS / 2];
    parent->numKeys++;
}

// Função para inserir uma palavra em um nó não cheio
void insertNonFull(BTreeNode *node, const char *key) {
    int i = node->numKeys - 1;

    if (node->isLeaf) {
        // Insere a palavra no local correto
        while (i >= 0 && strcmp(key, node->keys[i]) < 0) {
            node->keys[i + 1] = node->keys[i];
            i--;
        }
        node->keys[i + 1] = strdup(key);
        node->numKeys++;
    } else {
        // Encontra o filho onde a palavra deve ser inserida
        while (i >= 0 && strcmp(key, node->keys[i]) < 0) {
            i--;
        }
        i++;

        if (node->children[i]->numKeys == MAX_KEYS) {
            // Divide o filho se estiver cheio
            splitChild(node, i);
            if (strcmp(key, node->keys[i]) > 0) {
                i++;
            }
        }

        insertNonFull(node->children[i], key);
    }
}

// Função principal para inserir uma palavra na Árvore B
void insertBTree(BTreeNode **root, const char *key) {
    if (*root == NULL) {
        *root = createBTreeNode(1); // Cria a raiz se não existir
    }

    if ((*root)->numKeys == MAX_KEYS) {
        // Divide a raiz se estiver cheia
        BTreeNode *newRoot = createBTreeNode(0);
        newRoot->children[0] = *root;
        splitChild(newRoot, 0);
        insertNonFull(newRoot, key);
        *root = newRoot;
    } else {
        insertNonFull(*root, key);
    }
}

// Função para imprimir sugestões de palavras a partir de um nó com o prefixo correspondente
void printSuggestions(BTreeNode *node, const char *prefix) {
    if (!node) {
        return;
    }

    for (int i = 0; i < node->numKeys; i++) {
        // Verifica se a chave começa com o prefixo
        if (strncmp(node->keys[i], prefix, strlen(prefix)) == 0) {
            printf("%s\n", node->keys[i]);
        }

        // Continua verificando os filhos, se existirem
        if (!node->isLeaf) {
            printSuggestions(node->children[i], prefix);
        }
    }

    // Explora o último filho, caso existam filhos e o nó não seja folha
    if (!node->isLeaf) {
        printSuggestions(node->children[node->numKeys], prefix);
    }
}

// Função principal para encontrar e listar sugestões de palavras com um prefixo
void suggestWords(BTreeNode *root, const char *prefix) {
    if (root == NULL) {
        printf("Árvore está vazia ou prefixo não encontrado.\n");
        return;
    }

    BTreeNode *currentNode = root;

    while (currentNode != NULL) {
        int i = 0;

        // Busca a posição da chave que pode conter o prefixo
        while (i < currentNode->numKeys && strcmp(prefix, currentNode->keys[i]) > 0) {
            i++;
        }

        // Se encontramos uma chave que começa com o prefixo
        if (i < currentNode->numKeys && strncmp(currentNode->keys[i], prefix, strlen(prefix)) == 0) {
            // Imprime todas as palavras correspondentes no nó atual
            printSuggestions(currentNode, prefix);
            printf("\n");
            return;
        }

        // Se o nó é folha e o prefixo não foi encontrado
        if (currentNode->isLeaf) {
            break;
        }

        // Desce para o filho apropriado
        currentNode = currentNode->children[i];
    }

    printf("Nenhuma palavra encontrada com o prefixo '%s'.\n\n", prefix);
}

// Função para carregar palavras do arquivo "dicionario.txt"
void loadDictionary(BTreeNode **root, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    char word[100];
    while (fgets(word, sizeof(word), file)) {
        // Remove o caractere de nova linha
        word[strcspn(word, "\n")] = '\0';
        insertBTree(root, word);
    }

    fclose(file);
}

// Função principal
int main() {
    BTreeNode *root = NULL;

    // Carrega o dicionário do arquivo
    loadDictionary(&root, "dicionario.txt");

    int op = 8;
    do {
        printf("Fechar: -1\n");
        printf("Pesquisar uma palavra: 1\n");
        printf("Inserir uma palavra: 2\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch (op) {
            case 1: {
                char prefix[100];
                printf("Digite a palavra que deseja procurar: \n");
                scanf("%s", prefix);
                printf("Sugestões:\n");
                suggestWords(root, prefix);
                break;
            case 2: {
                char newWord[100];
                printf("Digite a palavra a ser inserida: ");
                scanf("%s", newWord);
                insertBTree(&root, newWord);
                printf("Palavra '%s' inserida com sucesso.\n\n", newWord);
                break;
            }
            }
        }
    } while (op != -1);

    return 0;
}
