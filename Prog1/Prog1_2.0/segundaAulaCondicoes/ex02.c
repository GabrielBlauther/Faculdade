/*
Exercício 02) Desenvolva um programa que solicite ao usuário digitar
um número inteiro. Após a digitação, o computador deverá mostrar na tela uma
mensagem informando se o número é positivo ou negativo. O número positivo é
o número maior ou igual a zero. O número negativo é o número menor que zero.
Exemplo: se o usuário informar o número 38, deverá ser mostrado na tela a
mensagem “38 é um número positivo”. Se o usuário informar o número -13,
deverá ser mostrado na tela a mensagem “-13 é um número negativo”.
*/

#include <stdio.h>

int main(){

  int n1;

  printf("Digite um numero: ");
  scanf("%d",&n1);

  if(n1<0) printf("numero negativo.");
  else printf("Numero positivo");
}