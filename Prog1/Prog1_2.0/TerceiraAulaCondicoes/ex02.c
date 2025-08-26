/*Exercício 02) Desenvolva um programa que solicite ao usuário digitar
três números inteiros. O programa deverá verificar entre estes três valores qual
é o menor e mostrar este valor na tela.
*/

#include <stdio.h>

int main(){
  int n1,n2,n3;

  printf("Digite 3 valores: ");
  scanf("%d%d%d",&n1,&n2,&n3);

  if(n1<n2 && n1 < n3){
    printf("\n%d<%d e %d<%d",n1,n2,n1,n3);
    printf("\nMenor valor: %d",n1);
    printf("\nPois %d eh menor que %d e %d", n1,n2,n3);
  }
    else if(n2<n1 && n2 < n3){
    printf("\n%d<%d e %d<%d",n2,n1,n2,n3);
    printf("\nMenor valor: %d",n2);
    printf("\nPois %d eh menor que %d e %d", n2,n1,n3);
  }
    else{
    printf("\n%d<%d e %d<%d",n3,n1,n3,n2);
    printf("\nMenor valor: %d",n3);
    printf("\nPois %d eh menor que %d e %d", n3,n2,n1);
  }
}