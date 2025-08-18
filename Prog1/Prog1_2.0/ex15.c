/*
Exercício 15) Semiperímetro é a medida da metade do perímetro de
uma figura geométrica e normalmente é representada pela letra S. O
semiperímetro do triângulo de lados a, b, c pode ser calculado pela seguinte
expressão:
Faça um programa que lê 3 valores, lados de um triângulo, e calcule e escreva
o semiperímetro do triângulo.
*/

#include <stdio.h>

int main(){

  float a, b, c, s;

  printf("Digite os valores dos lados do triangulo: ");
  scanf("%f%f%f",&a,&b,&c);

  s = (a+b+c)/2;

  printf("A area do Semiperímetro: %.2f",s);

}