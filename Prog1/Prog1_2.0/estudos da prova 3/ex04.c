/*
Leia e escreva um vetor de 10 número inteiros, mas que só permite adicionar os números na ordem crescente
*/

#include <stdio.h>

int main(){
  int vetor[10], i, j, crescente,numero;

  for(i=0;i<10;i++){
    if(i==0){
      printf("digite um numero: ");
      scanf("%d",&vetor[i]);
      crescente=vetor[i];
    }
    if(i > 0){
      printf("Digite um numero: ");
      scanf("%d",&numero);
      if(numero>crescente){
        vetor[i]=numero;
        crescente=vetor[i];
      }else{
        printf("Permitido apenas numeros em ordem crescente.\n");
        i--;
      }
    }
  }
  for(i=0;i<10;i++){
    printf("%d ",vetor[i]);
  }
}