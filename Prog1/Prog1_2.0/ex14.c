/*Faça um programa que leia 3 valores reais que
representam os comprimentos dos lados paralelos e a altura de um trapézio,
calcule e escreva a área do trapézio. Dica: a área de um trapézio é dada pela
expressão:
Ao transcrever a expressão, tome cuidado com a ordem em que as operações
devam ser executadas.*/

#include <stdio.h>

int main(){

  float n1, n2, n3,area;

  printf("Digite o valor dos dois lados e a altura do trapezio: ");
  scanf("%f%f%f",&n1,&n2,&n3);

  area= ((n1+n2)/2)*n3;

  printf("A area do trapezio eh: %.2f",area);
}