/*Exercício 03) Desenvolva um programa em C que leia um vetor X(10)
e ordene seus elementos em ordem decrescente. Escreva o vetor ordenado.*/

#include <stdio.h>

int main(){
  int vetor[10],i,j,trocou,aux;

  for(i=0;i<10;i++){
    printf("Digite o numero do %dº vetor: ",i+1);
    scanf("%d",&vetor[i]);
  }
  trocou=1;
  while(trocou==1){
    trocou=0;
    for(i=0;i<9;i++){
      if(vetor[i]<vetor[i+1]){
        aux = vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
        trocou=1;
      }
    }
  }
  for(i=0;i<10;i++){
    printf(" %d ",vetor[i]);
  }
}