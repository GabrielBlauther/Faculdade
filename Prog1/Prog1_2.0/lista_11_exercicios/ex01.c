/*Exercício 01) Desenvolva um programa em C solicite ao usuário
informar dez números inteiros e armazene estes valores em um vetor. Após, o
programa em C deverá mostrar na tela cada elemento do vetor acompanhado
do seu elemento simétrico em relação a sua posição no conjunto: o elemento
simétrico do valor que está na posição 1 é o valor que está na posição 10, o
elemento simétrico do valor que está na posição 2 é o valor que está na posição
9. Exemplo: supondo que o usuário informou os seguintes valores:*/

#include <stdio.h>

int main(){

  int i,j,vetor[10];

  for(i=0;i<10;i++){
    printf("Digite um numero: ");
    scanf("%d",&vetor[i]);
  }
  for(i=0;i<10;i++){
    printf("%d - %d\n",vetor[i], vetor[9-i]);
  }
}