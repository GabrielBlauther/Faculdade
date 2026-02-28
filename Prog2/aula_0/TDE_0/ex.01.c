/*
Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da
diagonal secundária.
*/
#include <stdio.h>

int main(void)
{
  int M[5][5], i, j,soma=0;

  for(i = 0; i < 5; i ++ )
  {
    for(j = 0; j < 5; j ++ )
    {
      printf("Digite o numero da %dº coluna da %dº linha:  ", i+1, j+1);
      scanf("%d", &M[i][j]);
    }
  }
  for(i = 0; i < 5; i ++ ){
    for(j = 0; j < 5; j ++ )
    {
      if(M[i][j] < 10){
      printf("%d   ", M[i][j]);
      }
      else
      {
        printf("%d  1", M[i][j]);

      }
    }
    printf("\n");
  }
  j=4;

  for(i=0; i < 5; i++)
  {
    soma+= M[i][j];
    j--;
  }
  printf("%d",soma);
}


