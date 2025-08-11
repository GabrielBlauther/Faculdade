/*17) Faça um programa que lê 3 valores, lados de um triângulo, e calcule e escreva a área do triângulo
formado. Dica: A área de um triângulo de lados a, b e c pode ser calculada pela expressão Área=
√S⋅(S−a)⋅(S−b)⋅( S−c)
, onde S é o semiperímetro, ou seja, a metade da soma dos lados = ( a+b+c
2
)*/

#include <stdio.h>
#include <math.h>

int main(){
  double valores [3],semip;
  char *nomes[] = {"primeiro valor","segundo valor", "terceiro valor"};

  for (int i= 0; i<3; i++) {
    printf("Digite o  %s: ", nomes[i]);
    scanf("%lf", &valores[i]);
  }

  semip = (valores[0] + valores[1] + valores[2])/2;

  printf("A área do triangulo é %.2lf", sqrt(semip * (semip - valores[0]) * (semip - valores[1])*(semip - valores[2])));

  return(0);
}