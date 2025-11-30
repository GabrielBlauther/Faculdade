/*
Leia um vetor de 15 números inteiros e ordene-os em ordem decrescente usando bubble sort.
Mostre o vetor original e o vetor ordenado. Durante a ordenação, exiba quantas trocas foram realizadas.
*/

#include <stdio.h>

int main(){
  int vetor[15],i,j,trocou=0,aux,cont=0;

  for(i=0;i<15;i++){
    printf("Digite um numero: ");
    scanf(" %d",&vetor[i]);
  }
  printf("Vetor antes da ordenação: ");
  for(i=0;i<15;i++){
    printf("%d",vetor[i]);
  }
  trocou=1;
  while(trocou==1){
    trocou=0;
    for(i=0;i<14;i++){
      if(vetor[i]<vetor[i+1]){
        aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
        trocou=1;
        cont++;
      }
    }
  }
  printf("\nNumero de trocas: %d\n", cont);
  printf("\nVetor depois da ordenação: ");
  for(i=0;i<15;i++){
    printf(" %d",vetor[i]);
  }

}