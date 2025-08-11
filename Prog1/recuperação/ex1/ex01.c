/*um numero é dito capicua quando, se lido da direita para esquerda ou da esquerda para direita,
representa o mesmos valor,como, por exemplo 77,434,6446 e 82328,
desenvolva um programa em C que leia um número e informe se ele é capicua*/


#include <stdio.h>

int main(){
  int num,temp_num,novo=0,i;

  printf("Digite um numero: ");
  scanf("%d",&num);

  temp_num=num;

  while(temp_num != 0){
    novo = novo * 10 + temp_num %10;
    temp_num/=10;
  }
  if(num == novo){
    printf("é capicua");
  }else
   printf("não é capicua")
}