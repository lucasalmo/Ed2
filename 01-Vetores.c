#include <stdio.h>

int main() {
    //comentei este vetor estático
    //int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, temp;
    int n;

    //imprime a mensagem na tela pedindo quantas posições terá o vetor 
    printf("insira a quantidade de posições do vetor: ");
    scanf("%d", &n);
    //declaro o vetor já recebendo a quantidade digitada pelo usuário
    int vetor[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        //temp = vetor[i];
        //vetor[i] = vetor[n - i];
        //vetor[n - i] = temp;
    }

    printf("Vetor invertido:\n");
    //modificando a estrutura do for para ele começar imprimir direto da última posição para a primeira
    for (i = n-1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
