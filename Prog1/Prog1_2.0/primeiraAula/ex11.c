/*
Exercício 11) Faça um programa que calcule o volume e a área de
um cubo e mostre os valores estimados. Dica: o volume é dado pela fórmula
, e a área é dada por , onde a é o
comprimento da aresta do cubo.
*/

#include <stdio.h>
#include <math.h>

int main(){
  int volume, aresta, area;

  printf("Digite o valor da aresta: ");
  scanf("%d",&aresta);

  volume = pow(aresta,3);
  area = pow(aresta,6);

  printf("Area do cubo eh %d e o volume eh %d",area,volume);

  return 0;
}