/*34) Desenvolva um programa em C que calcule e mostre na tela a soma dos 100 primeiros termos da
sequência 1+3+5+7+9....*/

#include <stdio.h>

int main(){
  int n=1,aux,i;

  for(i=1;i<=100;i++){
    aux+=n;
    n+=2;
    printf(" %d",n);
  }
}