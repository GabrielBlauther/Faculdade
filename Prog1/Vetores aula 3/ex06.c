/*6) Desenvolver um programa em C que solicite ao usuário informar cem números reais armazenando-os
em um vetor. Após desloque todos os elementos deste vetor uma posição a esquerda, colocando na
última posição o elemento que estava na primeira. Repetir este processo até que o maior elemento do
vetor fique na primeira posição do mesmo.*/

#include <stdio.h>

int main() {
    float vetor[100];
    int i;
    float aux,maior;

    // Entrada dos 100 números reais
    printf("Digite 100 valores reais:\n");
    for(i = 0; i < 100; i++) {
        scanf("%f", &vetor[i]);
    }

    // Encontrar o maior valor do vetor
    maior = vetor[0];
    for(i = 1; i < 100; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Rotaciona até o maior estar na primeira posição
    while(vetor[0] != maior) {
        aux = vetor[0];
        for(i = 0; i < 99; i++) {
            vetor[i] = vetor[i + 1];
        }
        vetor[99] = aux;
    }

    // Mostrar o vetor final
    printf("\nVetor com o maior elemento na primeira posição:\n");
    for(i = 0; i < 100; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
