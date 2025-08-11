/*9) Desenvolva um programa em C que solicite ao usuário informar 50 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá encontrar o maior valor informado e mostrar este valor
na tela. */

#include <stdio.h>

int main(){
  int vetores[50],i,aux=0,maior=0;

  printf("Digite 50 valores:\n");
  for(i=0;i<50;i++)
    scanf("%d",&vetores[i]);

  for(i=0;i<50;i++){
    if(vetores[i]>maior){
      maior=vetores[i];
      aux = i;
    }
  }
  printf("O maior numero digitado foi %d no vetor %d",maior,aux);
}