/*35) Desenvolva um programa em C que calcule e mostre na tela a soma dos 100 primeiros termos da
sequência*/

#include <stdio.h>

int main(){
  int i,dividendo=1,divisor=1;
  float soma=0;
  printf("A serie eh:\n1/1");
  for(i=2;i<=100;i++){
    divisor+=2;
    printf(" + 1/%d",divisor);
    soma+=(float)1/divisor;
  }
 printf("A soma dos 100 termos da sequência são: %.2f ",soma);
}