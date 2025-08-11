/*3) Desenvolva um programa em C que solicite ao usuário informar um valor inteiro N. O programa em C
deverá mostrar na tela a soma dos divisores do valor informado.
Exemplo: se o usuário digitar o número 21, o programa em C deverá mostrar na tela uma
mensagem que a soma dos divisores do número 21 é 32 (1 + 3 + 7 + 21).*/

#include <stdio.h>

int main(){
  int num,divisores,soma=1,x;

  printf("Digite um valor: ")
  scanf("%d",&num);
  soma+=num;
  for(x=2;x<=num/2;x++)
    if(num%x==0) soma+=x;
  printf("A soma dos divisores é: %d",soma);
}