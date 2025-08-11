/* 4) Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. Após a digitação, o
computador deverá executar a divisão destes números e mostrar o resultado na tela do computador.
Exemplo: se o usuário digitar os valores 522 e 12, o programa deve realizar a divisão destes
números e mostrar na tela o resultado (43,5).
Lembre que:
 apesar dos números informados pelo usuário serem inteiros, o resultado da divisão pode resultar
em um número real, portanto pense como as variáveis serão declaradas.
 Existem 3 operadores relacionados com a divisão (/ retorna quociente da divisão, \ -retorna a
parte inteira do quociente e % - retorna o resto da divisão). Você deve escolher o operador apropriado
para esta operação.*/

#include <stdio.h>

int main(){
  float num1, num2;

  printf("Digite o primeiro valor: ");
  scanf("%f",&num1);

  printf("Digite o segundo valor: ");
  scanf("%f", &num2);

  printf("O resultado da divisão eh: %.2f", num1/num2);
  return(0);
}