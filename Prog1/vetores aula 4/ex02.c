/*1) (00001800) Desenvolva um programa em C que leia um vetor X(10). Compare a seguir cada
elemento com o elemento da posição seguinte, trocando-os entre si se o elemento de maior valor
estiver antes do de menor valor. Escreve o vetor no final*/

#include <stdio.h>
main(){
  int v[10],i,aux,trocou=1;

  printf("Digite os 10 valores do vetor: \n");
  for (i=0;i<10;i++)
    scanf("%d",&v[i]);
    printf("\nValores digitados:\n");
  for (i=0;i<10;i++)
    printf("%d  ",v[i]);
    printf("\n\nTrocas sendo efetuadas");
  while (trocou==1){
    trocou=0;
    for (i=0;i<9;i++)
    if (v[i]>v[i+1]){
    aux=v[i];
    v[i]=v[i+1];
    v[i+1]=aux;
    trocou=1;
    }
    printf("\n");
    for (i=0;i<10;i++)
    printf("%d  ",v[i]);
  }
  printf("\n\nValores ordenados em ordem crescente:\n");
  for (i=0;i<10;i++)
  printf("%d  ",v[i]);

}