/*2) Desenvolva um programa que solicite ao usuário digitar um número inteiro. Após a digitação, o
computador deverá mostrar na tela uma mensagem informando se o número é positivo ou negativo. O
número positivo é o número maior ou igual a zero. O número negativo é o número menor que zero.
Exemplo: se o usuário informar o número 38, deverá ser mostrado na tela a mensagem “38 é um
número positivo”. Se o usuário informar o número -13, deverá ser mostrado na tela a mensagem “-13 é
um número negativo”.*/

#include <stdio.h>

int main(){
  int num1;

  printf("Digite um numero: ");
  scanf("%d", &num1);

  if (num1 >= 0)
    printf("%d é positivo",num1);
  else
    printf("%d é negativo",num1);

return(0);
}