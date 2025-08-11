/*12) Faça um programa que calcule o volume e a área de um cubo e mostre os valores estimados.*/

#include <stdio.h>
#include <math.h>

int main (){
  double num1;

  printf("Digite o valor do lado do quadrado: ");
  scanf("%lf", &num1);

  printf("O volume do cubo eh: %.2lf\n", pow(num1,3));
  printf("E a área do cubo eh: %.2lf\n", (num1*num1)*6);

  return(0);
}