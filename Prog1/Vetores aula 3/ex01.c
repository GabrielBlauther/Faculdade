/*1) Desenvolva um programa em C solicite ao usuário informar dez números inteiros e armazene estes
valores em um vetor. Após, o programa em C deverá mostrar na tela cada elemento do vetor
acompanhado do seu elemento simétrico em relação a sua posição no conjunto: o elemento simétrico
do valor que está na posição 1 é o valor que está na posição 10, o elemento simétrico do valor que está
na posição 2 é o valor que está na posição 9, ……..
Exemplo: supondo que o usuário informou os seguintes valores: */

#include <stdio.h>

int main(){

  int vet[10],i,a;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++)
  scanf("%d",&vet[i]);

  printf("Os numeros simétricos são:\n");

  for(i=0;i<10;i++)
    printf("%d - %d \n",vet[i],vet[9-i]);
}