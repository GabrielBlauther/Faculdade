/*2) Desenvolva um programa em C que solicite ao usuário informar um valor inteiro N. O programa em C
deverá mostrar na tela a quantidade de divisores que o valor informado possui.
Exemplo: se o usuário digitar o número 21, o programa em C deverá mostrar na tela uma
mensagem que o número 21 tem 4 divisores.*/

#include <stdio.h>

int main(){
  int num,cont=2,x;

  printf("Digite um numero: ");
  scanf("%d",&num);

  for(x=2,x <= num/2;x++)
    if(num%x==0) cont++;
  printf("O %d tem %d divisores\n",num,cont);
}