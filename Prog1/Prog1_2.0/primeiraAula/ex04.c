/*
Exercício 04) Desenvolva um programa que solicite ao usuário digitar
dois valores inteiros. Após a digitação, o computador deverá executar a divisão
destes números e mostrar o resultado na tela do computador.
Exemplo: se o usuário digitar os valores 522 e 12, o programa deve realizar a
divisão destes números e mostrar na tela o resultado (43,5).
Lembre que apesar dos números informados pelo usuário serem inteiros, o
resultado da divisão pode resultar em um número real, portanto pense como as
variáveis serão declaradas.
*/

#include <stdio.h>

int main (){

  int n1, n2;

  printf("Digite um numero: ");
  scanf("%d",&n1);
  printf("Digite um numero: ");
  scanf("%d",&n2);

  n1/=n2;

  printf("A divisão eh : %d",n1);

  return 0;
}