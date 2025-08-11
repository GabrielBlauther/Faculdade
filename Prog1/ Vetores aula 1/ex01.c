/*1) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. Após o programa em C deverá mostrar na tela os elementos do vetor na ordem
que foram digitados. */

#include <stdio.h>

int main (){

  int num[10],i;

  printf("Digite 10 valores: ");
  for(i=0;i<10;i++){
    scanf("%d",&num[i]);
  }
  printf("Os valores digitados foram: ");

  for(i=0;i<10;i++)
    printf(" %d", num[i]);
}