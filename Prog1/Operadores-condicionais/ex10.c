/* 10) Desenvolva um programa que solicite ao usuário digitar dois números reais. O programa deverá
verificar entre estes dois valores qual é o menor valor e mostrar na tela os dois valores em ordem
crescente.
Exemplo: se o usuário informar os números 97.6 e 32.65, deverá ser mostrado na tela a
mensagem “Valores em ordem crescente: 32.5 e 97.6”. */

#include <stdio.h>

int main(){
  float num1, num2;

  printf("Digite o valor do primeiro numero: ");
  scanf("%f",&num1);
  printf("Digite o valor do segundo numero: ");
  scanf("%f", &num2);

  if(num1 < num2){
    printf("O %f eh menor que %.2f\n", num1,num2);
    printf("Em ordem crescente: %.2f,%.2f",num1,num2);
  } else {
      printf("O %.2f eh menor que %.2f\n", num2,num1);
      printf("Em ordem crescente %.2f, %.2f",num2, num1);
  }
 return(0);
}