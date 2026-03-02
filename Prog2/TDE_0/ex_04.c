/*
Uma matriz identidade é uma matriz que possui 1 em todos os elementos da diagonal principal, e
0 em todas as outras posições. Faça um programa que leia uma matriz M[5][5] e verifique se é
uma matriz identidade escrevendo: 1 - Se é uma matriz identidade; 0 - Se não é uma matriz
identidade.
*/
#include <stdio.h>

int main (void)
{
    int i, M[5][5], j,zero = 1, um = 1;

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
            if(M[i][i] != 1 && M[i][j] != 0)
            {
                printf("0\n");
                um = 0;
                zero = 0;
                break;
            }
        }
    }
    if( um == 1 && zero == 1)
    {
        printf("1\n");
    }

}