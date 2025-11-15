/*
Exercício 04) Desenvolva um programa que solicite ao usuário digitar
três números inteiros. O programa deverá mostrar na tela os números
informados em ordem decrescente.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na
tela a mensagem “Números em ordem decrescente: 43, 34 e 15”
*/

#include <stdio.h>

int main(){
  int n1,n2,n3,maior,meio,menor;

  printf("Digite 3 numeros: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  //maior
  if(n1>n2&&n1>n3){
    maior = n1;
  }else if(n2>n1&&n2>n3){
    maior = n2;
  }else{
    maior =n3;
  }

  //menor
  if(n1<n2 && n1 < n3){
    menor = n1;
  }else if(n2<n1 && n2<n3){
    menor = n2;
  }else{
    menor = n3;
  }

  meio= (n1+n2+n3) - maior - menor;

  printf("%d %d %d",maior,meio,menor);

}