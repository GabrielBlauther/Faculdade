/*
Lista 08 | Exercício 01) Uma sequência estritamente crescente é aquela onde
cada número é maior que o número anteriormente informado. Por exemplo, a
sequência {1,4,5,7} se encontra em ordem estritamente crescente pois cada um
dos elementos é maior que o elemento anterior. Faça um programa em C que
solicite ao usuário informar a quantidade de números que ele quer digitar e
depois informe se os números digitados são uma sequência estritamente
crescente. Os números da sequência { 1, 2, 2, 3 } não configuram uma sequência
estritamente crescente. Resolva utilizando o laço de repetição While.
*/

#include <stdio.h>

int main(){

  int total_num, cont=0,num_atual,num_anterior;

  printf("Digite a quantida de numeros a serem digitados: ");
  scanf("%d",&total_num);

  while(1){
    printf("Digite o %dº numero: ",cont+1);
    scanf("%d", &num_atual);
    if(cont == 0){
      num_anterior = num_atual;
    }
    if(cont > 0){
      if(num_anterior >= num_atual){
        printf("Serie não é estritamente crescente. Programa finalizado");
        break;
      }
    }
    cont++;
    num_anterior=num_atual;
    if(cont == total_num){
      printf("Série estritamente crescente!");
      break;
    }
  }
}