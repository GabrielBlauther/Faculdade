/* 8) Desenvolva um programa que solicite ao usuário informar dois valores reais. Após a digitação, o
computador deve efetuar as seguintes operações:
• multiplique o primeiro número por 4
• multiplique o segundo número por 6
• a média aritmética dos resultados obtidos.
O resultado final destes cálculos deve ser mostrado na tela.
Exemplo: se o usuário informar os valores 5 e 9, o programa deve realizar o cálculo (5*4+9*6)/2
e mostrar na tela o resultado (37).*/

#include <stdio.h>

int main(){
  int num1,num2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);
  printf("Digite o segundo valor: ");
  scanf("%d", &num2);

  printf("A media aritmética de %d e %d é: %d",num1,num2, (num1*4+num2*6)/2);

  return(0);
}