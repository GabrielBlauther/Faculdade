/*
Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos em
toda a região acima da diagonal principal.
*/
#include <stdio.h>

int main(void)
{
  int i, M[5][5], j, soma=0;

  for(i = 0; i < 5; i ++ )
  {
    for(j = 0; j < 5; j ++ )
    {
      printf("Digite o numero da %dº coluna da %dº linha:  ", i+1, j+1);
      scanf("%d", &M[i][j]);
    }
  }
  int cont = 1 ;
  for( i = 0; i < 5; i++)
  {
    for(j = cont  ; j < 5 ; j++)
    {
      soma += M[i][j];
    }
    cont++;
  }
  printf("%d",soma);
}