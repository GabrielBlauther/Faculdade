#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void verifica_coluna (char matriz[LIN][COL])
{
    int x = 0 , o = 0 ;
    int i, j, linha = 0;
    
    for( i = 0; i < LIN ; i++)
    {
        for ( j = 0; j < LIN ; j++)
        {
            if(matriz[i][linha] == 'x')
            {
                x = 1;
            }
            else 
            {
                if(matriz[i][linha] != 'x')
                {
                    break;
                }
            }
        }
        linha++;
    }
    if(x == 1)
    {
        printf("Jogador X ganhou");
    }
    linha = 0; 
    
    for( i = 0; i < LIN ; i++)
    {
        for ( j = 0; j < LIN ; j++)
        {
            if(matriz[i][linha] == 'o')
            {
                o = 1;
            }
            else 
            {
                if(matriz[i][linha] != 'o')
                {
                    break;
                }
            }
        }
        linha++;
    }
    if(o == 1)
    {
        printf("Jogador O ganhou");
    }
}