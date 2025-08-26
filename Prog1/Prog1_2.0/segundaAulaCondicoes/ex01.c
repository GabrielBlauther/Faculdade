/*
Exercício 01) Desenvolva um programa que solicite ao usuário digitar
a idade de uma pessoa. Após a digitação, o computador deverá verificar se esta
pessoa é maior ou menor de idade e mostrar esta informação na tela do
computador.
Exemplo: se o usuário informar que a pessoa tem 17 anos, deverá ser mostrado
na tela a mensagem “Pessoa menor de idade”. Se o usuário informar que a
pessoa tem 18 anos, deverá ser mostrado na tela a mensagem “Pessoa maior
de idade”.
*/

#include <stdio.h>

int main(){

  int idade;

  printf("Digite sua idade: ");
  scanf("%d",&idade);

  if(idade>18) printf("Maior de idade");
  else printf("Menor de idade");
}