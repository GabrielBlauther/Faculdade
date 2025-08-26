/*
LISTA 01 | Exercício 05) Desenvolva um programa que solicite ao usuário digitar
dois valores reais. Após a digitação, o computador deverá efetuar as operações
de adição, subtração, multiplicação e divisão destes valores. Os quatro
resultados deverão ser mostrados na tela assim como os números digitados pelo
usuário
*/
#include <stdio.h>

int main (){

  int n1, n2,divisao,multiplicacao,soma,subtracao;

  printf("Digite um numero: ");
  scanf("%d",&n1);
  printf("Digite um numero: ");
  scanf("%d",&n2);


  soma=n1+n2;
  printf("A soma é: %d",n1);
  subtracao=n1-n2;
  printf("A subtração eh : %d",n1);
  multiplicacao=n1*n2;
  printf("A multiplicação eh : %d",n1);
  divisao=n1/n2;
  printf("A divisão eh : %d",n1);

  return 0;
}