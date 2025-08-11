/*Números primos gêmeos são pares de números primos ímpares consecutivos, ou
seja, cuja diferença é igual a 2. Os primeiros primos gêmeos são (3, 5), (5, 7), (11, 13), (17, 19), (29, 31) e
(41, 43). Faça um programa em linguagem C que leia dois números inteiros n e m, onde n <= m e escreva
todos os pares de números primos gêmeos neste intervalo.*/

#include <stdio.h>

int main(){
  int i,n,m,x,divisores=0,aux=0;

  printf("Digite um valor para n e m: ");
  scanf("%d%d",n,m);

  for(i=n;i<=m;i++){
    for(x=1;x<=i/2;x++)
      if(i%x==0){
        divisores++;
      }
      if(divisores==0){
        aux=i;

      }
  }
}