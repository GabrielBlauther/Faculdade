/*Exercício 01) Desenvolva um programa em C que leia um vetor X(10).
Compare a seguir cada elemento com o elemento da posição seguinte, trocandoos entre si se o elemento de maior valor estiver antes do de menor valor. Escreve
o vetor no final
*/

#include <stdio.h>

int main(){

  int vetor[10],i,j,trocontcholas,aux;

  for(i=0;i<10;i++){
    printf("Digite o numero do %dº vetor",i+1);
  }
  trocontcholas=1;
  while(trocontcholas==1){
    trocontcholas=1;
  for(j=0;j<10;j++){
      if(vetor[i]>vetor[i+1]){
        aux=vetor[i];
        vetor[i]=vetor[i+1];
        vetor[i+1]=aux;
        trocontcholas=1;
      }
    }
  }
  for(i=0;i<10;i++){
    printf("%d ",vetor[i]);
  }
}