/* 11) Desenvolva um programa que solicite ao usuário digitar dois números reais. O programa deverá
verificar entre estes dois valores qual é o maior valor e mostrar na tela a diferença do maior pelo menor
valor.
Exemplo: se o usuário informar os números 97.6 e 32.65, deverá ser mostrado na tela a
mensagem “ 97.6 – 32.5 = 65.1”. */

#include <stdio.h>

int main(){
  float num1,num2;

  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  if(num1 > num2){
    printf("O %.2f eh maior que %.2f",num1,num2);
    printf("A diferença de %.2f e %.2f eh: %.2f",num1,num2, num1 - num2);
  } else{
    if(num2 > num1){
      printf("O %.2f eh maior que %.2f",num2,num1);
      printf("A diferença de %.2f e %.2f eh: %.2f", num1, num2, num2 - num1);
  }
  }
  return(0);
}