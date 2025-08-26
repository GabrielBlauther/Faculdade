/*Exercício 01) Desenvolva um programa que solicite ao usuário digitar
três números inteiros. O programa deverá verificar entre estes três valores qual
é o maior e mostrar este valor na tela.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na
tela a mensagem “Maior valor: 43”. */

#include <stdio.h>

int main(){
  int n1,n2,n3;

  printf("Digite 3 valores: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  if(n1>n2 && n1>n3){
    printf("Maior valor: %d",n1);
  }else if(n2>n1 && n2>n3){
    printf("maior valor:%d", n2);
  }else{
    printf("Maior valor: %d",n3);
  }
}