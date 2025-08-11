/*25) Desenvolva um programa que solicite ao usuário informar três valores inteiros. O computador
deverá mostrar o menor valor informado. O menor entre três valores pode ser encontrado pela
aplicação repetida da expressão para encontrar o menor entre dois valores como no exercício 24.
Primeiro encontra-se o menor valor entre o primeiro e o segundo número. Depois encontra-se o menor
valor entre o terceiro valor e o valor obtido anteriormente. */

#include <stdio.h>
#include <stdlib.h>

int main(){
 int num1,num2,num3,maior,maior2;

  printf("Digite três valores: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  maior = (num1 + num2 - abs(num1 -num2))/2;
  maior2 = (num3 + maior - abs(maior - num3))/2;

  printf("O menor valor é %d\n",maior2 );

  return(0);
}