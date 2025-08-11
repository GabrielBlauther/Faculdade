/*6) Desenvolva um programa que solicite ao usuário digitar quatro números inteiros. O programa deverá
mostrar na tela os 3 (três) maiores valores em ordem crescente.
Exemplo: se o usuário informar os números 24, 15, 43 e 34 deverá ser mostrado na tela a
mensagem “Números em ordem crescente: 24, 34 e 43”.*/

#include <stdio.h>

int main(){
  int n1,n2,n3,n4,aux;

  printf("Digite 4 numeros:\n");
  scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

  if(n1 > n2){
    aux = n1;
    n1 = n2;
    n2 = aux;
  }
  if(n1 > n3){
    aux = n1;
    n1 = n3;
    n3 = aux;
  }
  if(n1 > n4){
    aux = n1;
    n1 = n4;
    n4 = aux;
  }
  if(n2 > n3){
    aux = n2;
    n2 = n3;
    n3 = aux;
  }
  if (n2 > n4){
    aux = n2;
    n2 = n4;
    n4 = aux;
  }
  if(n3 > n4){
    aux= n3;
    n3 = n4;
    n4 = aux;
  }
  printf("A ordem crescente eh: %d,%d e %d", n2,n3,n4);

  return(0);
}