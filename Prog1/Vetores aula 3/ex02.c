/*2) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá trocar o 1° elemento do vetor com o último, o 2°
elemento do vetor com o penúltimo, …, até o 5° com o 6°. O programa em C deverá mostrar os
elementos do vetor na tela, antes e depois da troca dos elementos.
Exemplo: se o usuário informar os valores:*/

#include <stdio.h>

int main(){

  int vetor[10],aux,i;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++)
    scanf("%d",&vetor[i]);

  for(i=0;i<5;i++){
    aux=vetor[i];
    vetor[i]=vetor[9-i];
    vetor[9-i]=aux;
  }
    printf("Vetor modificado:\n");
    for (i=0;i<10;i++)
        printf("%d  ",vetor[i]);
}