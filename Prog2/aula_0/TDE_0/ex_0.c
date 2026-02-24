/*
1. Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da
diagonal principal.
*/

#include <stdio.h>

int main(void)
{
  int M[5][5],i,j,soma =0;

  for(i = 0 ; i < 5; i++)
  {
    for(j = 0 ; j < 5; j++)
    {
      printf("Num: ");
      scanf("%d", &M[i][j]);
    }
  }


  for(i=0; i < 5; i++)
  {
    soma+= M[i][i];
  }
  printf("%d",soma);
}