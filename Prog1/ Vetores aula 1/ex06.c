/*6) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá substituir todos os valores negativos do vetor pelo seu
módulo. O programa em C deverá mostrar na tela o vetor modificado. Lembre-se que na linguagem de
programa em Cs, a função a ser utilizada no cálculo do módulo é abs().*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetor[10],i;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++){
    scanf("%d", &vetor[i]);
  }
  for(i=0;i<10;i++)
    if(vetor[i] < 0){
      vetor[i]=abs(vetor[i]);
      printf(" %d",vetor[i]);
    }
}