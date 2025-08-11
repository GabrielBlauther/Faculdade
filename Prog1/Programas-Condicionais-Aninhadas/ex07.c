/*7) Desenvolva um programa que solicite ao usuário digitar quatro números inteiros. O programa deverá
mostrar na tela os números informados em ordem decrescente.
Exemplo: se o usuário informar os números 15, 43, -9 e 34 deverá ser mostrado na tela a
mensagem “Números em ordem decrescente: 43, 34, 15 e -9”.*/

#include <stdio.h>

int main(){

  int n1,n2,n3,n4,aux;

  printf("Digite 4 valores:\n");
  scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

  if (n1 < n2) {aux = n1; n1 = n2; n2 = aux;}
  if (n1 < n3) {aux = n1; n1 = n3; n3 =aux;}
  if (n1 < n4) {aux = n1; n1 = n4; n4 =aux;}
  if (n2 < n3) {aux = n2; n2 = n3; n3 = aux;}
  if (n2 < n4) {aux = n2; n2 = n4; n4 = aux;}
  if (n3 < n4) {aux = n3; n3 = n4; n4 =aux;}

  printf("A ordem decrescente é: %d,%d,%d,%d",n1,n2,n3,n4);

  return(0);

}