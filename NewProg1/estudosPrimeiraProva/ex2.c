/*
3) Faça uma função em C que receba uma matriz quadrada M x N
(com M e N definidos pela diretiva #define), uma posição inicial (linha_inicial, coluna_inicial) e uma posição final (linha_final, coluna_final).
A função deve percorrer a matriz por colunas, somando todos os valores do elemento da posição inicial até o elemento da posição final, e retornar o resultado como um int.
*/

#include <stdio.h>

#define N 4
#define M 4

int soma_matriz(int mat[M][N], int li, int ci, int lf, int cf){
    int i,j,soma,linhaInicial, linhaFinal;
    soma=0;
    for (i = ci; i <= cf; i++){ 

        if(i == ci){
            linhaInicial=li;
        }else{
            linhaInicial=0;
        }
        if(i == cf){
            linhaFinal=lf;
        }else{
            linhaFinal = M-1;
        }

        for(j = linhaInicial; j <= linhaFinal ; j++){ 
            soma += mat[j][i];
        }
    }
    return soma;
}


int main(){
    int m[M][N] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15}
            };
    int soma = soma_matriz(m,1,0,2,2);
    printf("Resultado da soma: %d",soma);
}