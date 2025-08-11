/* 11) Faça um programa que leia 2 valores reais representando os diferentes lados de um retângulo,
calcule e escreva a área do retângulo, dada pelo produto dos lados.*/

#include <stdio.h>
int main(){
  float base, altura;

  printf("Digite o valor da base: ");
  scanf("%f", &base);
  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  printf("A area do triangulo é: %.2f", base*altura);

  return(0);
}