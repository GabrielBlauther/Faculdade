/*3) Desenvolva um programa em C que leia um vetor X(10) e ordene seus elementos em ordem
decrescente. Escreva o vetor ordenado.*/

#include <stdio.h>

int main(){
  int vetor[10],i,aux, j,trocou;

  for(i=0;i<10;i++){
    printf("Digite o %dº numero: ",i+1);
    scanf("%d", &vetor[i]);
  }

  //bubble sort
  trocou=1;

  while(trocou==1){
    trocou=0;
    for(j=0;j< 9;j++){
      if(vetor[j] < vetor[j+1]){
        aux=vetor[j];
        vetor[j]=vetor[j+1];
        vetor[j+1]=aux;
        trocou=1;
      }
    }
  }
  printf("Vetor ordenado em ordem decrescente: ");
  for(i=0;i<10;i++){
    printf("%d ",vetor[i]);
  }
}