/*Faça um algoritmo que leia um vetor X(10) e ordene seus elementos em ordem crescente. Escreva o vetor ordenado. 
Dica:O que acontece se o procedimento descrito no exercício V00001800 for executado repetidamente sobre o vetor?*/

#include <stdio.h>

int main() {
    int X[10];
    int i, j, temp;
    
    // Leitura do vetor
    printf("Digite 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }
    
    // Ordenação em ordem crescente (Bubble Sort)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (X[j] > X[j + 1]) {
                // Troca de elementos
                temp = X[j];
                X[j] = X[j + 1];
                X[j + 1] = temp;
            }
        }
    }
    
    // Escrita do vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");
    
    return 0;
}
