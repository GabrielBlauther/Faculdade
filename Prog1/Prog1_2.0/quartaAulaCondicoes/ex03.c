/*
Lista 03 | Exercício 03) Desenvolva um programa que solicite ao usuário digitar
três números inteiros. O programa deverá mostrar na tela os números
informados em ordem crescente.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na
tela a mensagem “Números em ordem crescente: 15, 34 e 43”.
*/

#include <stdio.h>

int main(){
  int n1,n2,n3,maior,menor,meio;

  printf("Digite 3 numeros: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  //Maior numero
  if(n1 >= n2 && n1>=n3){
    maior=n1;
  }else if(n2>n1 && n2>n3){
    maior=n2;
  }else{
    maior=n3;
  }

  //Menor
  if(n1<n2 && n1<n3){
    menor=n1;
  }else if(n2<n1 && n2<n3){
    menor=n2;
  }else{
    menor=n3;
  }

  meio=(n1 + n2 + n3) - menor - maior;

  printf("%d %d %d",menor,meio,maior);

  return 0;
}