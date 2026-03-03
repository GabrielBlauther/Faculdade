#include <stdio.h>
#include <stdlib.h>
#ifndef MATRIZ_H
#define MATRIZ_H

#define LIN 3
#define COL 3

void lerMatriz(int m[LIN][COL]);
void gerarAleatorio(int m[LIN][COL]);
void imprimirMatriz(int m[LIN][COL]);

void lerMatriz(int m[LIN][COL])
{
    int i, j;
    for( i = 0; i < LIN ; i++)
    {
        for(j = 0 ; j < COL; j++)
        {
            printf("Digite o M[%d][%d]: ",i, j);
            scanf("%d", &m[i][j]);
        }
    }
    return;
}

void gerarAleatorio(int m[LIN][COL])
{
    int i, j;
    for( i = 0; i < LIN ; i++)
    {
        for(j = 0 ; j < COL; j++)
        {
            m[i][j] = rand() % 100;
        }
    }
    return;
}

void imprimirMatriz(int m[LIN][COL])
{
    int i, j;
    for(i = 0; i < LIN; i ++ ){
        for(j = 0; j < COL; j ++ )
        {
            printf("%d   ", m[i][j]);
        }
        printf("\n");
    }
}

#endif