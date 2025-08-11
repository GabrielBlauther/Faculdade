/*23) Desenvolva um programa que solicite ao usuário informar três valores inteiros. O computador
deverá mostrar o maior valor informado. O maior entre três valores pode ser encontrado pela aplicação
repetida da expressão para encontrar o maior entre dois valores como no exercício 22. Primeiro
encontra-se o maior valor entre o primeiro e o segundo número. Depois encontra-se o maior valor entre
o terceiro valor e o valor obtido anteriormente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num1,num2 ,num3 ,maior1 ,maior2 ;

  printf("Digite três valores: ");
  scanf("%d%d%d", &num1, &num2,&num3);

  maior1 = (num1 + num2 + abs(num1 -num2))/2;
  maior2 = (num3 + maior1 + abs(num3 - maior1))/2;

  printf("O maior valor é o %d",maior2);

  return(0);
}