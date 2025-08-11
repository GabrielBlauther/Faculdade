/*4) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá mostrar na tela a posição de cada número menor que
zero desse vetor.*/

#include <stdio.h>

int main(){
  int vetor[10],i;

  printf("Digite 10 valores: ");
  for(i=0;i<10;i++){
    scanf("%d",&vetor[i]);
  }
  printf("possições menores que zero");
  for(i=0;i<10;i++){
    if(vetor[i]<0)
      printf("%d",i);
  }
}