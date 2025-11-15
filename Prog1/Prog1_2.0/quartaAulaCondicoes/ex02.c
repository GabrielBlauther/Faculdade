/*
Lista 03 | Exercício 02) Desenvolva um programa que solicite ao usuário digitar
três números inteiros. O programa deverá verificar entre estes três valores qual
é o menor e mostrar este valor na tela.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na
tela a mensagem “Menor valor: 15”.
*/

#include <stdio.h>

int main(){
  int n1,n2,n3, menor;

  printf("Digite 3 numeros: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  if(n1<n2 && n1<n3){
    menor=n1;
  } else if(n2<n1 && n2<n3){
    menor=n2;
  }else{
    menor=n3;
  }
  printf("O menor valor é: %d", menor);
}