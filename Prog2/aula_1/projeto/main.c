#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 3

int main(void)
{
    int m[LIN][COL];

    lerMatriz(m);
    imprimirMatriz(m);
    gerarAleatorio(m);
}