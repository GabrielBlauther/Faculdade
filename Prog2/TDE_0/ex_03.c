/*
Faça um programa que leia uma matriz M[5][5] e troque cada elemento da linha 3 com elemento
correspondente da linha 1. Escreva a matriz resultante.
*/

#include <stdio.h>

int main(void)
{
    int i, M[5][5], j, aux;

    for(i = 0; i < 5; i ++ )
  {
    for(j = 0; j < 5; j ++ )
    {
      printf("Digite o numero da %dº coluna da %dº linha:  ", i+1, j+1);
      scanf("%d", &M[i][j]);
    }
  }
  printf("Matriz antes das trocas\n");
  // matriz original
    for(i = 0; i < 5; i ++ ){
        for(j = 0; j < 5; j ++ )
        {
        if(M[i][j] < 10){
            printf("%d   ", M[i][j]);
        }
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz após as trocas\n");
  
  // troca de posições
  for(i = 0; i < 5; i ++ )
  {
    aux = M[3][i];
    M[3][i] = M[1][i];
    M[1][i] = aux;
  }

  //nova matriz
    for(i = 0; i < 5; i ++ ){
        for(j = 0; j < 5; j ++ )
        {
        if(M[i][j] < 10){
        printf("%d   ", M[i][j]);
        }
        }
        printf("\n");
    }
}
