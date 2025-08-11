/*8) Desenvolva um programa que solicite ao usuário digitar seis números inteiros. O programa deverá
somar os valores pares informados e mostrar o resultado desta soma na tela.
Exemplo: se o usuário informar os números 21, 15, 43, 34, -7 e 120 deverá ser mostrado na tela
a mensagem “A soma dos números pares digitados é 154.”*/

#include <stdio.h>

int main (){

  int n1,n2,n3,n4,n5,n6,soma = 0;

  printf("Digite 6 numeros:\n");
  scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);

  if (n1%2 == 0){soma += n1;}
  if (n2%2 == 0){soma += n2;}
  if (n3%2 == 0){soma += n3;}
  if (n4%2 == 0){soma += n4;}
  if (n5%2 == 0){soma += n5;}
  if (n6%2 == 0){soma += n6;}

  printf("%d",soma);
}