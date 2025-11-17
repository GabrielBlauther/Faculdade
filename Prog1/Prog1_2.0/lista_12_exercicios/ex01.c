/*Exercício 01) Desenvolva um programa em C que leia um vetor X(10).
Compare a seguir cada elemento com o elemento da posição seguinte, trocandoos entre si se o elemento de maior valor estiver antes do de menor valor. Escreve
o vetor no final
*/

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
    for(j=0;j<9;j++){
      if(vetor[j]>vetor[j+1]){
        aux=vetor[j];
        vetor[j]=vetor[j+1];
        vetor[j+1]=aux;
        trocou=1;
      }
    }
  }
  for(i=0;i<10;i++){
    printf("%d ",vetor[i]);
  }
}