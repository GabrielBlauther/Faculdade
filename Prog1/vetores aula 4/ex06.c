/*6) (00006600) Desenvolva um programa em C que lê um vetor V[10] e escreva, para cada valor
diferente que aparece no vetor, o valor e o número de vezes que o mesmo ocorre no vetor. Escreva os
valores em ordem crescente de valor.*/

#include <stdio.h>

int main(){
  int vetor[10],i,j,aux,trocou,cont=1;

  for(i=0;i<10;i++){
    printf("Digite o %dº valor: ",i+1);
    scanf("%d",&vetor[i]);
  }
  //bubble sort

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
    if(vetor[j]==vetor[i]){
      for(j=0;j<10;j++){
        if(vetor[i]==vetor[j]){
          cont++;
        }
      }
      printf("\nO numero %d apareceu %d vezes",vetor[i],cont);
      cont=1;
    }

  }
}