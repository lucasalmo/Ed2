#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do nó da Árvore Patricia
typedef struct PatriciaNode {
    char *key;                     // Chave armazenada (palavra ou parte dela)
    int isEndOfWord;               // Indica se é o final de uma palavra
    struct PatriciaNode *left;     // Filhos para prefixos diferentes
    struct PatriciaNode *right;    // Filhos para prefixos iguais
} PatriciaNode;

// Função para criar um novo nó
PatriciaNode* createNode(const char *key, int isEndOfWord) {
    PatriciaNode *node = (PatriciaNode *)malloc(sizeof(PatriciaNode));
    node->key = strdup(key); // Copia a chave
    node->isEndOfWord = isEndOfWord;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Função para encontrar o primeiro índice onde duas strings divergem
int findMismatchIndex(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i]) {
        i++;
    }
    return i;
}

// Função para inserir uma palavra na Árvore Patricia
PatriciaNode* insertPatricia(PatriciaNode *root, const char *word) {
    if (!root) {
        return createNode(word, 1); // Novo nó para palavra
    }

    int mismatchIndex = findMismatchIndex(root->key, word);

    // Caso 1: A palavra é um prefixo do nó atual
    if (mismatchIndex == strlen(root->key)) {
        if (mismatchIndex == strlen(word)) {
            root->isEndOfWord = 1; // Marca como palavra final
        } else {
            root->right = insertPatricia(root->right, word + mismatchIndex);
        }
        return root;
    }

    // Caso 2: O nó atual é um prefixo da palavra
    if (mismatchIndex == strlen(word)) {
        PatriciaNode *newNode = createNode(word, 1);
        newNode->right = root;
        return newNode;
    }

    // Caso 3: Há um ponto de divergência
    PatriciaNode *splitNode = createNode(root->key + mismatchIndex, root->isEndOfWord);
    splitNode->left = root->left;
    splitNode->right = root->right;

    root->key[mismatchIndex] = '\0'; // Divide a chave do nó atual
    root->isEndOfWord = 0;
    root->left = splitNode;
    root->right = createNode(word + mismatchIndex, 1);

    return root;
}

// Função para buscar uma palavra ou prefixo na Árvore Patricia
int searchPatricia(PatriciaNode *root, const char *word) {
    if (!root) {
        return 0; // Palavra não encontrada
    }

    int mismatchIndex = findMismatchIndex(root->key, word);

    // Palavra é prefixo do nó atual
    if (mismatchIndex == strlen(word) && mismatchIndex <= strlen(root->key)) {
        return root->isEndOfWord;
    }

    // Ir para a subárvore direita
    if (mismatchIndex == strlen(root->key)) {
        return searchPatricia(root->right, word + mismatchIndex);
    }

    return 0; // Palavra não encontrada
}

// Função para exibir as palavras na Árvore Patricia
void printPatricia(PatriciaNode *root, char *buffer, int depth) {
    if (!root) {
        return;
    }

    strncpy(buffer + depth, root->key, strlen(root->key));
    depth += strlen(root->key);

    if (root->isEndOfWord) {
        buffer[depth] = '\0';
        printf("%s\n", buffer);
    }

    printPatricia(root->left, buffer, depth);
    printPatricia(root->right, buffer, depth);
}

// Função para sugerir palavras a partir de um prefixo
void suggestWords(PatriciaNode *root, const char *prefix) {
    if (!root) {
        return;
    }

    int mismatchIndex = findMismatchIndex(root->key, prefix);

    // Caso 1: Prefixo coincide com o nó atual
    if (mismatchIndex == strlen(prefix)) {
        char buffer[100] = {0};
        strncpy(buffer, prefix, strlen(prefix));
        printPatricia(root, buffer, strlen(prefix));
        return;
    }

    // Caso 2: Continuar a busca na subárvore direita
    if (mismatchIndex == strlen(root->key)) {
        suggestWords(root->right, prefix + mismatchIndex);
    }
}

// Função para carregar as palavras do arquivo dicionario.txt
PatriciaNode* loadWordsFromFile(PatriciaNode *root, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Erro ao abrir o arquivo %s\n", filename);
        return root;
    }

    char word[100];
    while (fgets(word, sizeof(word), file)) {
        word[strcspn(word, "\n")] = 0; // Remover o '\n' da palavra
        root = insertPatricia(root, word);
    }

    fclose(file);
    return root;
}

// Função principal com menu interativo
int main() {
    PatriciaNode *root = NULL;
    char buffer[100];
    char word[100];
    int option;

    // Carregar palavras do arquivo no início do programa
    root = loadWordsFromFile(root, "dicionario.txt");

    do {
        // Menu de opções
        printf("\nEscolha uma opção:\n");
        printf("1. Inserir palavra\n");
        printf("2. Buscar palavra\n");
        printf("3. Sugerir palavras (autocompletar)\n");
        printf("4. Exibir todas as palavras\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &option);
        getchar();  // Consumir o caractere de nova linha

        switch (option) {
            case 1:
                printf("Digite a palavra para inserir: ");
                fgets(word, sizeof(word), stdin);
                word[strcspn(word, "\n")] = 0;  // Remover o '\n' gerado pelo fgets
                root = insertPatricia(root, word);
                printf("Palavra '%s' inserida com sucesso!\n", word);
                break;

            case 2:
                printf("Digite a palavra ou prefixo para buscar: ");
                fgets(word, sizeof(word), stdin);
                word[strcspn(word, "\n")] = 0;  // Remover o '\n' gerado pelo fgets
                if (searchPatricia(root, word)) {
                    printf("A palavra '%s' foi encontrada na árvore.\n", word);
                } else {
                    printf("A palavra ou prefixo '%s' não foi encontrado.\n", word);
                }
                break;

            case 3:
                printf("Digite o prefixo para sugerir palavras: ");
                fgets(word, sizeof(word), stdin);
                word[strcspn(word, "\n")] = 0;  // Remover o '\n' gerado pelo fgets
                printf("Sugestões para o prefixo '%s':\n", word);
                suggestWords(root, word);
                break;

            case 4:
                printf("\nPalavras na árvore:\n");
                printPatricia(root, buffer, 0);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (option != 5);

    return 0;
}
