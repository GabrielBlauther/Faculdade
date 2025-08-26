/*
 Exercício 03) Desenvolva um programa que solicite ao usuário digitar
um número inteiro. Após a digitação, o computador deverá mostrar na tela uma
mensagem informando se o número maior, menor ou igual a zero.
*/

#include <stdio.h>

int main(){
  int n1;

  printf("Digite um numero: ");
  scanf("%d",&n1);

  if(n1>0) printf("Numero positivo.");
  else if(n1==0) printf("Igual a zero");
  else printf("Numero negativo.");
}