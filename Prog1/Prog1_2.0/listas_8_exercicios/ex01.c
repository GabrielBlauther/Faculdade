/*
Exercício 02) Faça um programa em C que solicite ao usuário informar
quantos números ele pretende digitar. O programa deverá indicar se todos os
números informados são uma sequência estritamente decrescente. 3,2, 1 é um
exemplo de sequência estritamente decrescente. O exemplo 3,3,2,1 não é uma
sequência estritamente decrescente.
*/

#include <stdio.h>

int main(){
  int cont=0,num_atual,num_anterior,qntd_total;

  printf("Digite a quantidade de numeros a serem digitados: ");
  scanf("%d",&qntd_total);

  while(1){

    printf("Digite o valor do %dº ",cont+1);
    scanf("%d",&num_atual);

    if(cont == 0 ){
      num_anterior = num_atual;
    }
    if(cont > 0){
      if(num_atual<=num_anterior){
        printf("Serie não é estritamente decrescente");
        break;
      }
    }
    num_anterior = num_atual;
    if(cont == qntd_total){
      printf("Serie estritamente decrescente.");
      break;
    }
  }
}