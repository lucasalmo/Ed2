/*
O código abaixo apresenta a implementação de uma fila e suas operações básicas.

1 - comente o código
2 - implemente uma função para contar o número de elementos na fila.
3 - implemente uma função para limpar todos os elementos da fila, liberando memória apropriadamente.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    if (q == NULL) {
        printf("Falha na alocação de memória para a fila.\n");
        return NULL;
    }
    q->front = q->rear = NULL;
    return q;
}

void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Falha na alocação de memória para o novo nó.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (q->rear == NULL) { 
        q->front = q->rear = newNode;
    } else { 
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int dequeue(Queue* q) {
    if (q->front == NULL) { 
        printf("Fila está vazia.\n");
        return -1;
    }
    Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return data;
}

int isEmpty(Queue* q) {
    return q->front == NULL;
}

void printQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("A fila está vazia.\n");
        return;
    }
    Node* temp = q->front;
    printf("Elementos da fila: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// função para contar a quantidade de elementos na fila
void count(Queue* q) {
  int count = 0;
  //faz a verificação se a fila está vazia ou seja sem nenhum elemento
  if (isEmpty(q)) {
    printf("A fila está vazia.\n");
    return;
  }else{
    //cria um ponteiro do tipo Node que aponta para o iníco da fila
    Node* temp = q->front;
    //esta parte percorre a fila enquanto econtrar um elemento no ponteiro que aponta para o próximo 
    while(temp != NULL) {
      temp = temp->next;
      //o count é incrementado a cada elemento encontrado nesta fila possibilitando saber a quantidade de elementos nesta fila
      count++;
    }
  printf("Quantidade de elementos: %d\n", count);
  }
}

//função que faz a remoção de todos os elementos da fila
int dequeueAll(Queue* q) {
  if (isEmpty(q)) {
    printf("Fila está vazia.\n");
    return -1;
  }else{
    //cria um ponteiro do tiopo Node apontando para o início da fila
    Node* temp = q->front;
    while(temp != NULL) {
      int data = temp->data;
      q->front = q->front->next;
      if (q->front == NULL) {
        q->rear == NULL;
      }else {
        //esta parte percorre a fila para remoção dos elementos contidos nela
        while(q->front != NULL) {
        q->front = q->front->next;
        }
      }
      //faz a limpeza da memória
      free(temp);
      return data;
    }
  }
}

int main() {
    Queue* q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    printQueue(q);

    printf("Desenfileirado: %d\n", dequeue(q));
    printQueue(q);
    printf("Desenfileirado: %d\n", dequeue(q));
    printQueue(q);
    printf("Desenfileirado: %d\n", dequeue(q));
    printQueue(q);
    
    //inserção de novos elementos para mostrar que a função de remoção de todos elementos está funcionando
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 30);
    enqueue(q, 20);
    enqueue(q, 20);
    enqueue(q, 20);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 30);
    enqueue(q, 20);
    enqueue(q, 20);
    enqueue(q, 20);
    
    //imprime elementos da fila 
    printQueue(q);
    
    //mostra quantos elementos tem na fila
    count(q);
    
    //remove todos elementos da fila
    dequeueAll(q);
    
    //imprime a fila, aqui ela vai estar vazia por conta da chamada da função acima
    printQueue(q);

    return 0;
}
