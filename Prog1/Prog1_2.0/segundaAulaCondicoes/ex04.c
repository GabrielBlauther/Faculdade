/*
Exercício 04) Desenvolva um programa que solicite ao usuário digitar
um número inteiro. Após a digitação, o computador deverá mostrar na tela uma
mensagem informando se o número é par ou ímpar. O número par é o número
que dividido por 2 resulta resto zero. O número ímpar é o número que dividido
por 2 resulta resto um. Considere que o usuário não digitará o número zero, pois
o número zero não é um número para e nem um número ímpar.
*/

#include <stdio.h>

int main(){

  int num1;

  printf("Digite um numero: ");
  scanf("%d",&num1);

  if(num1%2==0){
    printf("É par");
  }
  else
    printf("É impar");
}