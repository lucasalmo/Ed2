/*
O código abaixo apresenta a implementação de uma pilha e suas operações básicas.

1 - comente o código
2 - implemente uma função para verificar se a pilha está vazia.
3 - proponha uma função que possa fazer expansão dinâmica quando a capacidade máxima é atingida, em vez de simplesmente negar novas inserções na pilha.
*/

#include <stdio.h>
#define MAX_SIZE 3

int pilha[MAX_SIZE];
int topo = -1;

void push(int elemento) {
    if (topo < MAX_SIZE - 1) {
        pilha[++topo] = elemento;
    } else {
        printf("Pilha cheia!\n");
    }
}

int pop() {
    if (topo == -1) {
        printf("Pilha vazia!\n");
        return -1;
    } else {
        return pilha[topo--];
    }
}

int top() {
    if (topo == -1) {
        printf("Pilha vazia!\n");
        return -1;
    } else {
        return pilha[topo];
    }
}

void imprimir() {
    printf("Conteúdo da pilha:\n");
    for (int i = topo; i >= 0; i--) {
        printf("%d ", pilha[i]);
    }
    printf("\n");
}

//função que verifica se a pilha está vazia
void isEmpty() {
  if ( topo == -1) {
    printf("Pilha vazia!!");
  }else {
      printf("Pilha contém elementos."); 
  }
}

//função para expansão dinâmica

int main() {
    push(10);
    push(20);
    push(30);
    imprimir();
    printf("Elemento no topo: %d\n", top());
    printf("Elemento removido: %d\n", pop());
    
    //remove os outros elementos da pilha para a função de verificação se a pilha está vazia retornar que não há elementos na pilha
    printf("Elemento no topo: %d\n", top());
    printf("Elemento removido: %d\n", pop());
    printf("Elemento no topo: %d\n", top());
    printf("Elemento removido: %d\n", pop());
    
    //imprime os elemento da pilha
    imprimir();
    
    //chama a função que verifica se a pilha está vazia
    isEmpty();
    return 0;
}
