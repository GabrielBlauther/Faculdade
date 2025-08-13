/*
Exercício 13) Faça um programa que leia 2 valores reais que
representam a base e a altura de um triângulo, calcule e escreva a área do
triângulo. Dica: a área de um triângulo é dada pela expressão:
*/

#include <stdio.h>

int main(){

  float base, altura,area;

  printf("Digite o valor da base: ");
  scanf("%f",&base);

  printf("Digite o valor altura: ");
  scanf("%f",&altura);

  area = (altura*base)/2;

  printf("A area da tringualo eh: %.2f",area);

}