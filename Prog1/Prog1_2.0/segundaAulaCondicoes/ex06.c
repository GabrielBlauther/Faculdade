/*
Exercício 06) Desenvolva um programa que solicite ao usuário digitar
seis números inteiros. O programa deverá somar os valores pares informados e
mostrar o resultado desta soma na tela.
*/
#include <stdio.h>

int main(){

  int n1,n2,n3,n4,n5,n6,cont=0;

  printf("Digite um numero: ");
  scanf("%d",&n1);
  if (n1%2==0) cont+=n1;

  printf("Digite um numero: ");
  scanf("%d",&n2);
  if (n2%2==0) cont+=n2;

  printf("Digite um numero: ");
  scanf("%d",&n3);
  if (n3%2==0) cont+=n3;

  printf("Digite um numero: ");
  scanf("%d",&n4);
  if (n4%2==0) cont+=n4;

  printf("Digite um numero: ");
  scanf("%d",&n5);
  if (n5%2==0) cont+=n5;

  printf("Digite um numero: ");
  scanf("%d",&n6);
  if (n6%2==0) cont+=n6;

  printf("Soma de numeros pares: %d",cont);
}