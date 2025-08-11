/*2) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. Após o programa em C deverá mostrar na tela os elementos do vetor na ordem
contrária à que foram digitados. */

#include <stdio.h>

int main(){

  int num[10],i;

  printf("Digite 10 valores: ");
  for(i=0;i<10;i++){
    scanf("%d",&num[i]);
  }

  printf("A ordem contraria é: ");

  for(i=9;i>0;i--){ // lembrar que aqui ele pega a posição e a posição zero conta como posição 1
    printf(" %d",num[i]);
  }

}