/*3) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. Após o programa em C deverá mostrar na tela os números pares informados e em
seguida os números ímpares informados.*/

#include <stdio.h>

int main (){

  int vetor[10],i;

  printf("DIgite 10 valores: ");
  for(i=0;i<10;i++){
    scanf("%d",&vetor[i]);
  }
  printf("Numeros pares:");
  for(i=0;i<10;i++){
    if(vetor[i]%2==0)
    printf(" %d",vetor[i]);
  }
  printf("Numeros impares:");
  for(i=0;i<10;i++){
    if(vetor[i]%2==1)
    printf(" %d",vetor[i]);
  }
}
