/*
O código apresenta uma lista duplamente ligada com operações básicas para inserir, deletar e imprimir.

1 - comente o código.
2 - Modifique a operação de inserção de dados, para que o usuário seja capaz de inserir valores para a lista.
3 - Faça uma operação de buscar por um valor específico, informado pelo usuário, onde o programa deve apresentar se o valor foi encontrado e, em caso afirmativo, exibir detalhes(vizinhos) do nó correspondente.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;             // Dados armazenados no nó
    struct Node* next;    // Ponteiro para o próximo nó
    struct Node* prev;    // Ponteiro para o nó anterior
} Node;

Node* head = NULL; // Ponteiro para o início da lista

// Função para inserir um novo nó no início da lista
void insertFront(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Aloca memória para o novo nó
    if (newNode == NULL) {
        printf("Falha na alocação de memória.\n");
        return;
    }
    newNode->data = value; // Define o valor do novo nó
    newNode->next = head; // O próximo nó do novo nó é o atual início da lista
    newNode->prev = NULL; // O novo nó será o primeiro, então seu ponteiro anterior é NULL
    if (head != NULL)
        head->prev = newNode; // Atualiza o ponteiro anterior do antigo início da lista
    head = newNode; // Atualiza o início da lista para o novo nó
}

// Função para deletar um nó específico da lista
void deleteNode(Node* node) {
    if (node == head) // Se o nó a ser removido é o início da lista
        head = node->next; // Atualiza o início da lista
    if (node->next != NULL) // Se o nó não é o último
        node->next->prev = node->prev; // Atualiza o ponteiro anterior do próximo nó
    if (node->prev != NULL) // Se o nó não é o primeiro
        node->prev->next = node->next; // Atualiza o ponteiro para o próximo nó do nó anterior
    free(node); // Libera a memória do nó removido
}

// Função para imprimir todos os elementos da lista
void printList() {
    Node* temp = head; // Começa pelo início da lista
    while (temp != NULL) { // Percorre toda a lista
        printf("%d ", temp->data); // Imprime o valor do nó atual
        temp = temp->next; // Move para o próximo nó
    }
    printf("\n"); // Nova linha após imprimir todos os elementos
}

// Função para buscar um valor específico na lista
void searchValue(int value) {
    Node* temp = head; // Começa pelo início da lista
    while (temp != NULL) { // Percorre toda a lista
        if (temp->data == value) { // Se o valor do nó atual é o valor procurado
            printf("Valor %d encontrado.\n", value);
            printf("Detalhes do nó:\n");
            printf("Valor: %d\n", temp->data);
            if (temp->prev != NULL)
                printf("Vizinhos: Anterior = %d\n", temp->prev->data);
            else
                printf("Vizinhos: Anterior = NULL\n");
            if (temp->next != NULL)
                printf("Vizinhos: Próximo = %d\n", temp->next->data);
            else
                printf("Vizinhos: Próximo = NULL\n");
            return;
        }
        temp = temp->next; // Move para o próximo nó
    }
    printf("Valor %d não encontrado.\n", value);
}

int main() {
    int choice, value;
    
    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Inserir valor na frente\n");
        printf("2. Imprimir lista\n");
        printf("3. Buscar valor\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite o valor para inserir: ");
                scanf("%d", &value);
                insertFront(value); // Insere o valor fornecido pelo usuário
                break;
            case 2:
                printList(); // Imprime a lista
                break;
            case 3:
                printf("Digite o valor a buscar: ");
                scanf("%d", &value);
                searchValue(value); // Busca o valor fornecido pelo usuário
                break;
            case 4:
                // Libera a memória da lista antes de sair
                while (head != NULL) {
                    Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                printf("Saindo...\n");
                return 0; // Sai do programa
            default:
                printf("Opção inválida.\n");
        }
    }
}
