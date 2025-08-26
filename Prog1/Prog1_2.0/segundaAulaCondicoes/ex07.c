/*
Exercício 07) Desenvolva um programa que solicite ao usuário digitar
dois números inteiros. O programa deverá verificar se estes números são
múltiplos entre si. Para realizar esta verificação, devemos dividir os dois números
entre si e verificar se o resto da divisão é igual a zero. O programa deve mostrar
na tela uma das seguintes mensagens "São múltiplos" ou "Não são múltiplos".
*/

#include <stdio.h>

int main(){

  int n1,n2;

  printf("Digite dois numeros: ");
  scanf("%d%d",&n1,&n2);

  if(n1%n2==0 && n2%n1==0){
    printf("São multiplos");
  }else
    printf("Não são multiplos");

}