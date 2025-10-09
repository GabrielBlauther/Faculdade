/*
Exercício 05) A sequência de fibonacci, muito conhecida na
matemática, é mostrada na tabela abaixo:
n 0 1 2 3 4 5 6 7 8 9 10 11 12 ...
fib(n) 0 1 1 2 3 5 8 13 21 34 55 89 144 ...
Esta sequência começa com 0 e 1 e cada novo número é a soma dos dois
imediatamente anteriores.
Desenvolva um programa em C que gere e mostre na tela os 100 primeiros
termos da série de fibonacci. Para trabalhar com números com grandes dígitos
utilize o tipo de varíavel long long int e para imprimir no printf uma variável do
tipo long long int utilize o formato %lld printf("%lld", variavel).
*/

#include <stdio.h>

int main(){
 long long int num_1=0,num_2=1,i,novo=0;

  printf("--------Sequencia de fibonacci 100 primeiros numeros--------\n\n");
  printf("\n%lld",num_1);
  printf("\n%lld\n",num_2);
  for(i=0;i<=100;i++){

    novo = num_1+num_2;
    printf("%lld\n",novo);
    num_1=num_2;
    num_2=novo;
  }
}