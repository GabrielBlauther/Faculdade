/* 2) Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. Após a digitação, o
computador deverá executar a subtração do primeiro número do segundo número e mostrar o resultado
na tela do computador.
Exemplo: se o usuário digitar os valores 900 e 100, o programa deve realizar a subtração do
número 900 pelo número 100 e mostrar na tela o resultado (800).*/

#include <stdio.h>

int main(){
  int num1, num2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);

  printf("Digite o segundo valor: ");
  scanf("%d", &num2);

  printf("A subtração eh: %d", num1-num2);
  return(0);
}