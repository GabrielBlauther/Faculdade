/*
Exercício 03) Desenvolva um programa que solicite ao usuário digitar
dois valores inteiros. Após a digitação, o computador deverá executar a
multiplicação destes números e mostrar o resultado na tela do computador.
*/


#include <stdio.h>

int main (){

  int n1, n2;

  printf("Digite um numero: ");
  scanf("%d",&n1);
  printf("Digite um numero: ");
  scanf("%d",&n2);

  n1*=n2;

  printf("A multiplicação eh : %d",n1);

  return 0;
}