#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da árvore
typedef struct Node {
    int id;               // ID do usuário
    int curtidas;         // Número de curtidas
    int comentarios;      // Número de comentários
    int totalInteracoes;  // Total de interações (curtidas + comentários)
    struct Node* esquerda;
    struct Node* direita;
} Node;

// Função para criar um novo nó
Node* criarNo(int id, int curtidas, int comentarios) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    novoNo->id = id;
    novoNo->curtidas = curtidas;
    novoNo->comentarios = comentarios;
    novoNo->totalInteracoes = curtidas + comentarios;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// Função para inserir um novo usuário na árvore pelo total de interações
Node* inserirUsuario(Node* root, int id, int curtidas, int comentarios) {
    if (root == NULL) {
        return criarNo(id, curtidas, comentarios);
    }

    int totalInteracoes = curtidas + comentarios;
    if (totalInteracoes < root->totalInteracoes) {
        root->esquerda = inserirUsuario(root->esquerda, id, curtidas, comentarios);
    } else if (totalInteracoes > root->totalInteracoes) {
        root->direita = inserirUsuario(root->direita, id, curtidas, comentarios);
    } else {
        // Se o total de interações é o mesmo, decide pela ID para evitar duplicação de nós com mesmo total
        if (id < root->id) {
            root->esquerda = inserirUsuario(root->esquerda, id, curtidas, comentarios);
        } else if (id > root->id) {
            root->direita = inserirUsuario(root->direita, id, curtidas, comentarios);
        } else {
            printf("Usuário com ID %d já existe.\n", id);
        }
    }
    return root;
}

// Função para exibir os usuários em ordem decrescente de engajamento
void exibirMaisEngajados(Node* root) {
    if (root != NULL) {
        exibirMaisEngajados(root->direita);
        printf("ID: %d, Curtidas: %d, Comentários: %d, Total Interações: %d\n",
               root->id, root->curtidas, root->comentarios, root->totalInteracoes);
        exibirMaisEngajados(root->esquerda);
    }
}

// Função para encontrar o nó com o menor valor de interações (usada na remoção)
Node* encontrarMinimo(Node* root) {
    Node* atual = root;
    while (atual && atual->esquerda != NULL) {
        atual = atual->esquerda;
    }
    return atual;
}

// Função para remover um usuário pelo total de interações
Node* removerUsuario(Node* root, int id, int curtidas, int comentarios) {
    if (root == NULL) return root;

    int totalInteracoes = curtidas + comentarios;
    if (totalInteracoes < root->totalInteracoes) {
        root->esquerda = removerUsuario(root->esquerda, id, curtidas, comentarios);
    } else if (totalInteracoes > root->totalInteracoes) {
        root->direita = removerUsuario(root->direita, id, curtidas, comentarios);
    } else {
        if (root->id != id) {
            root->esquerda = removerUsuario(root->esquerda, id, curtidas, comentarios);
            root->direita = removerUsuario(root->direita, id, curtidas, comentarios);
            return root;
        }

        // Caso 1: Nó sem filhos
        if (root->esquerda == NULL && root->direita == NULL) {
            free(root);
            return NULL;
        }
        
        // Caso 2: Nó com apenas um filho
        else if (root->esquerda == NULL) {
            Node* temp = root->direita;
            free(root);
            return temp;
        } else if (root->direita == NULL) {
            Node* temp = root->esquerda;
            free(root);
            return temp;
        }
        
        // Caso 3: Nó com dois filhos
        Node* temp = encontrarMinimo(root->direita);
        root->id = temp->id;
        root->curtidas = temp->curtidas;
        root->comentarios = temp->comentarios;
        root->totalInteracoes = temp->totalInteracoes;
        root->direita = removerUsuario(root->direita, temp->id, temp->curtidas, temp->comentarios);
    }
    return root;
}

// Função para buscar um usuário pelo ID
Node* buscarUsuario(Node* root, int id) {
    if (root == NULL || root->id == id) {
        return root;
    }
    if (id < root->id) {
        return buscarUsuario(root->esquerda, id);
    } else {
        return buscarUsuario(root->direita, id);
    }
}

// Função para atualizar as interações de um usuário específico
void atualizarInteracoes(Node* root, int id, int novasCurtidas, int novosComentarios) {
    Node* usuario = buscarUsuario(root, id);
    if (usuario != NULL) {
        usuario->curtidas += novasCurtidas;
        usuario->comentarios += novosComentarios;
        usuario->totalInteracoes = usuario->curtidas + usuario->comentarios;
        printf("\nInterações do usuário %d atualizadas.\n", id);
    } else {
        printf("Usuário com ID %d não encontrado.\n", id);
    }
}

// Função principal para testar
int main() {
    Node* root = NULL;

    // Inserindo usuários
    root = inserirUsuario(root, 101, 50, 30);
    root = inserirUsuario(root, 102, 40, 10);
    root = inserirUsuario(root, 103, 60, 25);

    // Exibindo usuários mais engajados
    printf("Usuários mais engajados (em ordem decrescente):\n");
    exibirMaisEngajados(root);

    // Atualizando interações de um usuário
    atualizarInteracoes(root, 101, 10, 5);

    // Removendo um usuário
    root = removerUsuario(root, 102, 40, 10);

    // Exibindo usuários novamente após a atualização e remoção
    printf("\nUsuários após atualização e remoção:\n");
    exibirMaisEngajados(root);

    // Teste de busca de usuário
    printf("\nBusca de usuário pelo ID:\n");
    Node* usuario = buscarUsuario(root, 101);
    if (usuario != NULL) {
        printf("Usuário encontrado - ID: %d, Curtidas: %d, Comentários: %d, Total Interações: %d\n",
               usuario->id, usuario->curtidas, usuario->comentarios, usuario->totalInteracoes);
    } else {
        printf("Usuário não encontrado.\n");
    }

    return 0;
}

