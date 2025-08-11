/* 22) Desenvolva um programa que solicite ao usuário informar dois valores inteiros. O computador
deverá mostrar o maior valor informado. Para calcular o maior entre dois valores quaisquer, dividimos a
soma dois números informados e do módulo da diferença do primeiro pelo segundo número por 2 (dois),
isto é,
valor1 + valor2 + |valor1-valor2|
 2*/

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
  int num1,num2;

  printf("Digite dois valores: ");
  scanf("%d%d",&num1,&num2);

  printf("O maior valor informado é:%d",(num1 + num2 + abs(num1 -num2))/2);

  return(0);
 }