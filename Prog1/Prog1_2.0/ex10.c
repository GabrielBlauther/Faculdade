/*
Exercício 10) Faça um programa que leia 2 valores reais
representando os diferentes lados de um retângulo, calcule e escreva a área do
retângulo, dada pelo produto dos lados.
*/
#include <stdio.h>

int main(){
  int n1,n2,retangulo;

  printf("Digite o primeiro lado: ");
  scanf("%d",&n1);
  printf("Digite o segundo lado: ");
  scanf("%d",&n2);

  retangulo = n1 * n2;

  printf("Resultado: %d", retangulo);

}