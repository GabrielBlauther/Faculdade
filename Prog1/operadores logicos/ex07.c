/* 7) Desenvolva um programa que solicite ao usuário informar dois valores inteiros. Após a digitação, o
computador deve calcular o quadrado da diferença do primeiro valor pelo segundo. O resultado desta
operação deve ser mostrado na tela.
Exemplo: se o usuário informar os valores 23 e 17, o programa deve realizar o cálculo (23-17)2
 e
mostrar na tela o resultado (36)*/

#include <stdio.h>
#include <math.h>

int main(){
  double num1, num2;

  printf("Digite o primeiro valor: ");
  scanf("%lf", &num1); // Em double usamos '%lf' ao invez do '%d'

  printf("Digite o segundo valor: ");
  scanf("%lf", &num2);

  printf("O quadrado da diferença de %.2lf - %.2lf eh: %.2lf\n",num1, num2, pow(num1 - num2,2));

  return(0);
}