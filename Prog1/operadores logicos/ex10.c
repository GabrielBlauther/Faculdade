/*10) Faça um programa que leia um valor N, representando o lado de um quadrado, e calcule e escreva
a área do quadrado, dada pelo lado ao quadrado.*/

#include <stdio.h>

int main(){
  int num1;

  printf("Digite o valor do lado do quadrado: ");
  scanf("%d", &num1);

  printf("A área do quadrado eh: %d", num1*num1);

  return(0);
}