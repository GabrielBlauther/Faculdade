/*32) Desenvolva um programa em C que solicite ao usuário informar um valor inteiro (N). O programa em
C deve calcular e mostrar na tela o enésimo termo da série de Fibonacci.*/

#include <stdio.h>

int main(){
  int aux,n,t1=0,t2=1,i;

  printf("Digite o o enesimo termo desejado: ");
  scanf("%d",&n);

  if(n == 1)
    printf("O %dº termo da sequencia de Fibonacci é: %d", n, t1);
  else if(n == 2)
    printf("O %dº termo da sequencia de Fibonacci é: %d", n, t2);
  else {
  for(i=3;i<=n;i++){
    aux=t1+t2;
    t1=t2;
    t2=aux;
    }
  }
  printf("o enésimo %dº termo é %d",n,t2);
}