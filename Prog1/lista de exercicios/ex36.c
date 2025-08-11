/*36) Desenvolva um programa em C que calcule e mostre na tela a soma dos 100 primeiros termos da
sequência x/1 + x/3 + x/5 + x/7 + x/9 +..... , onde o x deve ser um valor inteiro informado pelo usuário no início do
programa em C.*/

#include <stdio.h>

int main(){
  int i,dividendo,divisor=1;
  float soma=0;

  printf("Digite um valor para ser o dividendo: ");
  scanf("%d",&dividendo);
  printf("A serie é: \n%d/1",dividendo);

  for(i=2;i<=100;i++){
    divisor+=2;
    printf(" + %d/%d",dividendo,divisor);
    soma += (float)dividendo/divisor;
  }
  printf("\nA soma dos termos da sequencia:%.2f",soma);
}