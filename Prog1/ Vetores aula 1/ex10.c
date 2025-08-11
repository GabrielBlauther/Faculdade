/*10) Desenvolva um programa em C que solicite ao usuário informar 80 valores inteiros e armazene
estes valores em um vetor. O programa em C deverá encontrar o menor valor informado e a sua
posição no vetor, mostrando estas informações na tela. */

#include <stdio.h>

int main(){
  int vetores[80],i,aux=0,menor=100000000;

  printf("Digite 80 valores:\n");
  for(i=0;i<80;i++)
    scanf("%d",&vetores[i]);

  for(i=0;i<50;i++){
    if(vetores[i] < menor){
      menor=vetores[i];
      aux = i;
    }
  }
  printf("O menor numero digitado foi %d no vetor %d",menor,aux);
}