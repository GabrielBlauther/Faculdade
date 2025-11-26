/*
Leia um vetor de 20 números inteiros e escreva na tela quantas vezes cada número foi digitado.
*/

#include <stdio.h>

int main(){
  int vetor[10],i,j,cont=0,achou=0;

  for(i=0;i<10;i++){
    printf("Digite um numero: ");
    scanf("%d",&vetor[i]);
  }

  for(i=0;i<10;i++){
    achou=0;
    for(j=0;j<i;j++){
      if(vetor[j] == vetor[i]){
        achou=1;
        break;
      }
    }
   if(achou == 0){
    cont=0;
    for(j=0;j < 20; j++){
      if(vetor[i]==vetor[j]){
        cont++;
      }
    }
    if(cont==1){
      printf("%d - %d vez\n",vetor[i],cont);
    }else{
      printf("%d - %d vezes\n",vetor[i],cont);
    }
   }
  }
}