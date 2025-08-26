/*
Exercício 05) Desenvolva um programa que solicite ao usuário digitar
seis números inteiros. O programa deverá contar e mostrar na tela a quantidade
de valores ímpares informados.
Exemplo: se o usuário informar os números 21, 15, 43, 34, -7 e 120 deverá ser
mostrado na tela a mensagem “Foram informados 4 números ímpares.”
*/

#include <stdio.h>

int main(){

  int n1,n2,n3,n4,n5,n6,cont=0;

  printf("Digite um numero: ");
  scanf("%d",&n1);
  if (n1%2!=0) cont++;

  printf("Digite um numero: ");
  scanf("%d",&n2);
  if (n2%2!=0) cont++;

  printf("Digite um numero: ");
  scanf("%d",&n3);
  if (n3%2!=0) cont++;

  printf("Digite um numero: ");
  scanf("%d",&n4);
  if (n4%2!=0) cont++;

  printf("Digite um numero: ");
  scanf("%d",&n5);
  if (n5%2!=0) cont++;

  printf("Digite um numero: ");
  scanf("%d",&n6);
  if (n6%2!=0) cont++;

  printf("Quantidade de numeros impares: %d",cont);
}