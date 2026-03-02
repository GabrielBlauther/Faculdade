/*
Faça um programa que leia uma matriz M[5][5] e escreva o número da linha que contenha a
maior soma de seus elementos. Considere que a matriz só contem valores positivos.
*/

#include <stdio.h>

int main (void) 
{
    int i, M[5][5], j, soma=0, maior=0,linha=0;

    for(i = 0; i < 5; i ++ )
    {
        for(j = 0; j < 5; j ++ )
        {
            printf("Digite o numero da %dº coluna da %dº linha:  ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
    }

    for( i = 0; i < 5 ; i ++)
    {
        for( j = 0; j < 5; j++)
        {
            soma+= M[i][j];
        }
        if(soma > maior)
        {
            maior = soma;
            linha = i;
        }
    }
    printf("Linha com maior valor somado: %d", linha);
}