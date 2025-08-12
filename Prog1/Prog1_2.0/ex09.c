/*
Exercício 09) Faça um programa que leia um valor N, representando
o lado de um quadrado, e calcule e escreva a área do quadrado, dada pelo lado
ao quadrado.
*/

#include <stdio.h>

int main(){
  int lado,quadrado;

  printf("Digite o lado do quadrado: ");
  scanf("%d",&lado);

  quadrado = lado*4;

  printf("Resultado: %d",quadrado);

}