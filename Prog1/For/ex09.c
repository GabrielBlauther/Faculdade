/*9) Desenvolva um programa em C que solicite ao usuário informar 15 valores inteiros. O programa em
C deverá contar quantos valores estão no intervalo [10,20] , isto é, são valores maiores ou iguais a 10 e
menores ou iguais a 20. O programa em C deverá mostrar na tela a quantidade de valores dentro do
intervalo solicitado. */

#include <stdio.h>

int main(){
  int i,valor,cont=0;

  for(i=1;i<=15;i++){
    printf("\nDigite o %d valor: ",i);
    scanf("%d",&valor);

    if(valor >= 10 && valor <= 20) cont++;
  }
  printf("A quantidade de valores informados dentro do intervalo eh %d\n",cont);
  return(0);
}