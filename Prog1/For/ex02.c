/* 2) Desenvolva um programa em C que solicite ao usuário informa um número inteiro. O programa em C
deverá mostrar na tela os números de 1 a N (número inteiro informado).
Exemplo: se o usuário informar o número 11, o programa em C deverá mostrar na tela os
números 1,2,3,4,5,6,7,8,9,10 e 11.*/

#include <stdio.h>

int main(){
  int i,num;
  printf("Digite um numero: ");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  printf("%d->",i);

  return(0);
}