/*
A área de um círculo é estimada pela fórmula
. Assumindo que o valor de é 3.14159, faça um programa
que leia um número real representando o raio de um círculo, calcule e mostre a
área do círculo.
*/

#include <stdio.h>
#include <math.h>

int main(){

  float raio,pi,area;

  printf("Digite o numero do raio: ");
  scanf("%d",&raio);

  pi=3.14159;
  area=pi*pow(raio,2);

  printf("Area do circulo:%d",area);
}