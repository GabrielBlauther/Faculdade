/*9) (00002000) Desenvolva um programa em C que leia, para cada pessoa de um conjunto de 10
pessoas, o seu peso (inteiro) e altura (real), e escreva a lista de pesos e alturas em ordem crescente de
altura. Os dois dados referentes a cada pessoa devem ser lidos juntos (ou seja, o algoritmo não deve ler
todos os pesos e em seguida todas as alturas)*/

#include <stdio.h>
 int main(){

  int altura[10],peso[10],i,aux,trocou;

  //leitura de dados
  for(i=0;i<10;i++){
    printf("Digite sua altura: ");
    scanf("%d",&altura[i]);
    printf("Digite seu peso: ");
    scanf("%d",&peso[i]);
  }
  trocou=1;
  do{
    trocou=0;
    for(i=0;i<9;i++){
      if(altura[i]>altura[i+1]){
        aux=altura[i];
        altura[i]=altura[i+1];
        altura[i+1]=aux;
        aux=peso[i];
        peso[i]=peso[i+1];
        peso[i+1]=aux;
        trocou=1;
      }
    }
  }while(trocou==1);
  for(i=0;i<10;i++){
    printf("altura:%d peso:%d\n",altura[i],peso[i]);
  }
 }