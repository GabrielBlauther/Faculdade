/*3) Desenvolva um programa que solicite ao usuário digitar um número inteiro. Após a digitação, o
computador deverá mostrar na tela uma mensagem informando se o número maior, menor ou igual a
zero.
Exemplo: se o usuário informar o número 38, deverá ser mostrado na tela a mensagem “38 é um
número maior que zero”. Se o usuário informar o número -13, deverá ser mostrado na tela a mensagem
“-13 é um número menor que zero”. Se o usuário informar o número 0, deverá ser mostrado na tela a
mensagem “Número digitado igual a zero”. */

#include <stdio.h>
int main(){
 int num;

 printf("Digite um valor: ");
 scanf("%d",&num);

 if(num > 0)
  printf("%d é maior que zero", num);

 if(num == 0)
  printf("%d é igual a zero",num);

 if(num < 0)
  printf("%d é menor que zero",num);

return(0);
}