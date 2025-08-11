/*22) Um número é palíndromo quando lido da esquerda para a direita ou da direita para a esquerda
representa sempre o mesmo valor, como por exemplo 434, 6446 e 82328.
Desenvolva um programa em C que solicite ao usuário informar um número inteiro com valor até
100.000.000. O programa em C deve verificar se este número é palíndromo e mostrar uma mensagem
na tela informando se o número é ou não palíndromo.*/

#include <stdio.h>

int main(){

  int num,num2,novo=0,resto;

  printf("Digite um número: ");
  scanf("%d",&num);
  num2=num;

  while(num2!=0){
  resto= num2%10;
  novo*=10+resto;
  num2/=10;
  }
  if(num==novo)
    printf("É um numero palindromo");
  else
    printf("Não é um numero palindromo");
}
