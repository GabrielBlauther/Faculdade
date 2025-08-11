/* 3) Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. Após a digitação, o
computador deverá executar a multiplicação destes números e mostrar o resultado na tela do
computador.
Exemplo: se o usuário digitar os valores 11 e 13, o programa deve realizar a multiplicação destes
números e mostrar na tela o resultado (143). */

#include <stdio.h>

int main(){
  int num1,num2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);

  printf("Digite o segundo valor: ");
  scanf("%d", &num2);

  printf("O produto eh: %d", num1*num2);

}