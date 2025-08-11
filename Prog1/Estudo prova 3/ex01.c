/*Desenvolver um programa em C que leia 40 valores inteiros armazenando-os em
um vetor. Após desloque todos os elementos deste vetor uma posição a direita, colocando na primeira
posição o elemento que estava na última. Repetir este processo até que o maior fique na última posição do
vetor. Mostre o vetor original e a cada movimentação dos elementos do vetor, o mesmo deverá ser
mostrado na tela.*/

#include <stdio.h>

int main(){
  int vetor[10],aux,maior,i;


  for(i=0;i<10;i++){
    printf("Digite o valor do %dº valor: ",i+1);
    scanf("%d",&vetor[i]);
  }
  maior=vetor[0];
  for(i=1;i<10;i++){
    if(vetor[i]>maior){
      maior=vetor[i];
    }
  }
  printf("Rotações:\n");

  while(vetor[9]!=maior){
    aux=vetor[9];
    for(i=9;i>0;i--){
      vetor[i]=vetor[i-1];
    }
    vetor[0]=aux;
    for(i=0;i<10;i++)
      printf("%d ",vetor[i]);
    printf("\n");
  }
}