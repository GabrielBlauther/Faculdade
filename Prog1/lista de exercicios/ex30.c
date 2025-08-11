/*Desenvolva um programa em C que gere e mostre na tela os 100 primeiros termos da série de
fibonacci.*/

#include <stdio.h>

int main(){
  unsigned long long int f1=1,f2=0,i,aux;

  printf("A serie com os 100 primeiros numeros fibonacci são: \n0\n1\n ");

  for(i=3;i<=100;i++){
    aux=f1+f2;
    printf("\n%u",aux);
    f1=f2;
    f2=aux;
  }
}