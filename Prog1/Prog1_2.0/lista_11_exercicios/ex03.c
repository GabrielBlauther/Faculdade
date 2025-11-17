/*Exercício 03) Desenvolva um programa em C que solicite ao usuário
informar 20 valores inteiros e armazene estes valores em um vetor. O programa
em C deverá trocar cada elemento que estiver em posição ímpar pelo elemento
da posição par imediatamente a seguir. O programa em C deverá mostrar os
elementos do vetor na tela, antes e depois da troca dos elementos.
Exemplo para um vetor de 10 elementos: se o usuário informar os valores:*/

#include <stdio.h>

int main(){

  int vetor[10],i;

  for(i=0;i<10;i++){
    printf("Digite um numero: ");
    scanf("%d",&vetor[i]);
  }

}