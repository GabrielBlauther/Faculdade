/*
Exercício 06) Desenvolva um programa em C que mostre na tela os
10 primeiros termos da série de Fibonacci em que os números gerados são
primos. Um número primo é um número natural maior do que 1 que tem apenas
dois divisores diferentes: 1 e ele mesmo. Em outras palavras, um número primo
é aquele que não pode ser dividido por nenhum outro número além de 1 e ele
próprio, sem deixar resto.
*/

#include <stdio.h>

int main(){
  long long int num_1=0, num_2=1,novo=0, ehprimo,i,j,cont=0;

  printf("-------10 primeiros numeros primos da serie de fibonacci-------\n\n");

  while(cont<10){
    ehprimo=1;
    novo=num_1+num_2;
      for(i=2;i<novo;i++){
        if(novo % i == 0){
          ehprimo=0;
          break;
        }
      }
    if(novo > 1){
      if(ehprimo == 1){
        printf("%lld  ", novo);
        cont++;
      }
    }
    num_1=num_2;
    num_2=novo;
  }
}