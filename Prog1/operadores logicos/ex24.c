/*24) Desenvolva um programa que solicite ao usuário informar dois valores inteiros. O computador
deverá calcular e mostrar o menor valor informado. Para calcular o menor entre dois valores quaisquer,
primeiro somamos os dois valores informados. Após, subtraímos desta soma (resultado anterior) o
maior valor dos dois números informados. Para calcular o maior valor, utilize o mesmo procedimento do
exercício 1 (um).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int num1, num2,maior;

  printf("Digite dois valores: ");
  scanf("%d%d", &num1,&num2);

  maior = (num1 + num2 + abs(num1 -num2))/2;

  printf("O menor valor é %d", (num1 + num2)- maior );

  return(0);
}