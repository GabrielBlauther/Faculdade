/*43) O sistema binário é um sistema de numeração posicional em que todas as quantidades são
representadas por apenas dois números, ou seja, zero e um (0 e 1). Podemos citar como exemplos de
alguns números binários e seu correspondente no sistema de numeração decimal:
Decimal 0 1 2 3 4 5 6 7
Binário 000 001 010 011 100 101 110 111
Desenvolva um programa que solicite ao usuário um número binário de até seis dígitos. O
programa deve calcular e mostrar na tela o valor decimal correspondente ao número binário digitado.
Exemplo: Se o usuário informar o valor binário 100110, o programa deverá mostrar na tela o
valor 38. Para desenvolver este programa, obtem-se os dígitos individualmente (utilizando os
operadores de divisão e o resto da divisão), multiplicar cada dígito binário pelo seu peso (1,2,4,8...) e
somar os produtos :*/

#include <stdio.h>

int main(){

  int num;

  printf("Digite um binario: ")
  scanf("%d", &num);


}