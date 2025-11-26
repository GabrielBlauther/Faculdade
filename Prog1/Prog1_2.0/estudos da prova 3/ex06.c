/*
Leia dois vetores, K e N, e escreva na tela os números que estão em k e não estão em N.
*/

#include <stdio.h>

int main(){
  int K[10], N[10],i,j,achou=0;

  for(i=0;i<10;i++){
    printf("Digite um numero para o vetor K: ");
    scanf("%d",&K[i]);
    printf("Digite um numero para o vetor N: ");
    scanf("%d",&N[i]);
  }

  for(i=0;i<10;i++){
    achou=0;
    for(j=0;j<10;j++){
      if(K[i]==N[j]){
        achou=1;
        break;
      }
    }
    if(achou==0){
      printf("%d \n",K[i]);
    }
  }
}