#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura de um nó da árvore AVL
struct Node {
    int id;               // ID do cliente (chave de busca)
    char name[50];        // Nome do cliente
    struct Node *left;
    struct Node *right;
    int height;
};

// Função para criar um novo nó
struct Node* newNode(int id, char name[]) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->id = id;
    strcpy(node->name, name);
    node->left = NULL;
    node->right = NULL;
    node->height = 1;  // novo nó é inicialmente uma folha
    return node;
}

// Função para obter a altura de um nó
int height(struct Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

// Função para obter o valor máximo entre dois inteiros
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Rotação à direita
struct Node *rightRotate(struct Node *y) {
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Rotação à esquerda
struct Node *leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// Obter o fator de balanceamento do nó
int getBalance(struct Node *N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

// Inserção na árvore AVL
struct Node* insert(struct Node* node, int id, char name[]) {
    if (node == NULL)
        return newNode(id, name);

    // Comparação com o ID do nó para decidir a posição na árvore
    if (id < node->id)
        node->left = insert(node->left, id, name);
    else if (id > node->id)
        node->right = insert(node->right, id, name);
    else  // IDs duplicados não são permitidos na árvore AVL
        return node;

    // Atualizar altura do nó ancestral
    node->height = 1 + max(height(node->left), height(node->right));

    // Obter fator de balanceamento
    int balance = getBalance(node);

    // Casos de rotação para balanceamento
    // Caso Esquerda-Esquerda
    if (balance > 1 && id < node->left->id)
        return rightRotate(node);

    // Caso Direita-Direita
    if (balance < -1 && id > node->right->id)
        return leftRotate(node);

    // Caso Esquerda-Direita
    if (balance > 1 && id > node->left->id) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Caso Direita-Esquerda
    if (balance < -1 && id < node->right->id) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Encontrar o nó com menor valor (para remoção)
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;

    while (current->left != NULL)
        current = current->left;

    return current;
}

// Remoção na árvore AVL
struct Node* deleteNode(struct Node* root, int id) {
    if (root == NULL)
        return root;

    // Percorre a árvore para encontrar o nó a ser removido
    if (id < root->id)
        root->left = deleteNode(root->left, id);
    else if (id > root->id)
        root->right = deleteNode(root->right, id);
    else {
        // Caso 1: Nó com um único filho ou nenhum
        if ((root->left == NULL) || (root->right == NULL)) {
            struct Node* temp = root->left ? root->left : root->right;

            // Sem filhos
            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else // Um único filho
                *root = *temp;

            free(temp);
        } else {
            // Caso 2: Nó com dois filhos
            struct Node* temp = minValueNode(root->right);

            // Substituir dados do nó pela chave sucessora
            root->id = temp->id;
            strcpy(root->name, temp->name);

            // Remover sucessor
            root->right = deleteNode(root->right, temp->id);
        }
    }

    if (root == NULL)
        return root;

    // Atualizar altura do nó atual
    root->height = 1 + max(height(root->left), height(root->right));

    // Obter o fator de balanceamento
    int balance = getBalance(root);

    // Casos de rotação para balanceamento
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

// Função para buscar um nó pelo ID
struct Node* search(struct Node* root, int id) {
    if (root == NULL || root->id == id)
        return root;

    if (id < root->id)
        return search(root->left, id);

    return search(root->right, id);
}

void searchAndPrint(struct Node* root, int id) {
    struct Node* result = search(root, id);
    if (result != NULL)
        printf("Encontrado: ID: %d, Nome: %s\n", result->id, result->name);
    else
        printf("ID %d não encontrado na árvore.\n", id);
}

// Exibição da árvore AVL em formato hierárquico
void printTreeDetailed(struct Node* root, int level, char* relation, struct Node* parent) {
    if (root == NULL)
        return;

    // Exibir o nó com o formato especificado
    if (parent == NULL) {
        printf("Raiz: %d - %s, Altura: %d, Nível: %d\n", root->id, root->name, root->height, level);
    } else {
        printf("%s de %d - %s: %d - %s, Altura: %d, Nível: %d\n",
               relation, parent->id, parent->name,
               root->id, root->name,
               root->height, level);
    }

    // Recursivamente exibir os filhos, especificando o nível e a relação
    printTreeDetailed(root->left, level + 1, "Filho à Esquerda", root);
    printTreeDetailed(root->right, level + 1, "Filho à Direita", root);
}

// Função principal
int main() {
    struct Node *root = NULL;

    // Inserção de nós como exemplo
    root = insert(root, 10, "Alice");
    root = insert(root, 70, "Grace");
    root = insert(root, 20, "Bob");
    root = insert(root, 50, "Eve");
    root = insert(root, 30, "Charlie");
    root = insert(root, 40, "Diana");
    root = insert(root, 60, "Frank");

    printf("Árvore AVL após inserções:\n");
    printTreeDetailed(root, 0, "Raiz", NULL);

    // Busca de nós
    printf("\nBusca de nós:\n");
    searchAndPrint(root, 50);
    searchAndPrint(root, 15);

    // Remoção de nós
    printf("\nRemoção de nós:\n");
    root = deleteNode(root, 50);
    printf("Árvore AVL após remover ID 50:\n\n");
    printTreeDetailed(root, 0, "Raiz", NULL);

    root = deleteNode(root, 10);
    printf("\nÁrvore AVL após remover ID 10:\n");
    printTreeDetailed(root, 0, "Raiz", NULL);

    return 0;
}

