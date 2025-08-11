/*4) Desenvolva um programa que solicite ao usuário digitar três números inteiros. O programa deverá
mostrar na tela os números informados em ordem decrescente.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na tela a
mensagem “Números em ordem decrescente: 43, 34 e 15”.*/

#include <stdio.h>

int main (){
  int n1,n2,n3,aux;

  printf("Digite 3 numeros: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  if(n1 < n2){
    aux = n1;
    n1 = n2;
    n2 = aux;
  }
  if(n1 < n3){
    aux = n1;
    n1 = n3;
    n3 = aux;
  }
  if(n2 < n3){
    aux = n2;
    n2 = n3;
    n3 = aux;
  }
  printf("Números em ordem decrescente: %d, %d e %d\n", n1, n2, n3);
}