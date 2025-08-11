/*30) A sequência de fibonacci, muito conhecida na matemática, é mostrada na tabela abaixo:
n 0 1 2 3 4 5 6 7 8 9 10 11 12 ...
fib(n) 0 1 1 2 3 5 8 13 21 34 55 89 144 ...
Esta sequência começa com 0 e 1 e cada novo número é a soma dos dois imediatamente
anteriores.
Desenvolva um programa em C que gere e mostre na tela os 100 primeiros termos da série de
fibonacci.*/

#include <stdio.h>

int main(){
  int i,t1=0,aux, t2=1;

  for(i=3;i<=100;i++){
    aux=t1+t2;
    printf("%d\n,",aux);
    t1=t2;
    t2=aux;
  }
}
