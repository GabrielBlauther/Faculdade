/*6) Desenvolva um programa em C que solicite ao usuário informar um número inteiro N que
corresponde ao número de valores que o usuário deverá informar. A cada valor ímpar digitado, o
programa em C deverá mostrar a mensagem “É um número ímpar.”.
Exemplo: Se o usuário digitar como primeiro valor inteiro o número 8, o programa em C deverá
fazer com que o usuário informe mais 8 valores: */

#include <stdio.h>

int main(){
  int N, i,valor;

  printf("Digite o numero de repetições desejada: ");
  scanf("%d",&N);

  for(i=1;i <= N;i++){

    printf("\nDigite o %dº valor: ",i);
    scanf("%d",&valor);
    if(valor%2 == 1)
      printf("Este numero eh impar\n");

  }
  return(0);
}