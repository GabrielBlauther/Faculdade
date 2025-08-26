/*
Exercício 08) Desenvolva um programa que solicite ao usuário
informar três valores inteiros, respectivamente o primeiro termo de uma
progressão aritmética (PA), o último termo da progressão e a razão desta
progressão. O computador deverá calcular e mostrar na tela a soma dos termos
da PA.
Para calcularmos a soma dos termos da PA, podemos utilizar a fórmula:
*/

#include <stdio.h>

int main(){
  int Ptermo,Ultermo,razao,termos,pa;

  printf("Digite o primeiro termo: ");
  scanf("%d",&Ptermo);
  printf("Digite o valor do ultimo termo: ");
  scanf("%d",&Ultermo);
  printf("Digite o valor da razão: ");
  scanf("%d",&razao);

  termos = (Ultermo - Ptermo)/razao;

  pa=((Ptermo + Ultermo)/2)*termos;

  printf("Resultado: %d",pa);

}