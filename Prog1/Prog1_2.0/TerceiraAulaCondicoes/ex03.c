/*Exercício 03) Desenvolva um programa que solicite ao usuário digitar
três números inteiros. O programa deverá mostrar na tela os números
informados em ordem crescente.*/

#include <stdio.h>

int main(){
  int n1,n2,n3,aux;

  printf("Digite 3 numeros inteiros: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  // Primeira passada
  if(n1 > n2) {
      aux = n1; n1 = n2; n2 = aux;
  }
  if(n2 > n3) {
      aux = n2; n2 = n3; n3 = aux;
  }

  // Segunda passada
  if(n1 > n2) {
      aux = n1; n1 = n2; n2 = aux;
  }


 printf("Ordem crescente: %d, %d e %d",n1,n2,n3);

}