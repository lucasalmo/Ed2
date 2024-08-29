/*
O código abaixo realiza a impressão do vetor na ordem inversa.
1 - comente o código
2 - faça uma modificação para que seja possível inserir um vetor de n elementos.
*/

/*#include <stdio.h>

int main() {
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, temp;

    for (i = 0; i < 5; i++) {
        temp = vetor[i];
        vetor[i] = vetor[9 - i];
        vetor[9 - i] = temp;
    }

    printf("Vetor invertido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    //int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, temp;
    int n;
    
    printf("insira a quantidade de posições do vetor: ");
    scanf("%d", &n);
    int vetor[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        //temp = vetor[i];
        //vetor[i] = vetor[n - i];
        //vetor[n - i] = temp;
    }

    printf("Vetor invertido:\n");
    for (i = n-1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}