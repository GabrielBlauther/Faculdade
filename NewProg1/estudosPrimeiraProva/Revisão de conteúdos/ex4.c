/*
4) Faça uma função em linguagem C que que receba uma matriz de inteiros e coloque as linhas da matriz em ordem decrescente, 
considerando a soma dos elementos de cada linha. 
A quantidade de linhas e colunas da matriz estão definidas através da diretiva #define.
*/


#include <stdio.h>

#define N 3 //Linha
#define M 4 //Coluna

void ordena_linhas (int mat[N][M]){
    int vet[N], aux, i,j,k;

    for(i=0;i<N;i++){
        aux=0;
        for(j=0;j<M;j++){
            aux+=mat[i][j];
        }
        vet[i]=aux;
    }

    for(i=0;i<N-1;i++){
        for(j=0;j<N-1;j++){
            if(vet[j]<vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
                
                for(k = 0;k < M - 1;k++){
                    aux=mat[k][j];
                    mat[j][k] = mat[j+1][k];
                    mat[j+1][k]=aux;
                }
            }
        }
    }
}

int main() {
    int mat[N][M] = {
        {3, 2, 5, 1},
        {1, 4, 6, 2},
        {7, 8, 2, 3}
    };

    ordena_linhas(mat);

    // Impressão da matriz para testar
    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < M; col++) {
            printf("[%02d]  ", mat[lin][col]);
        }
        printf("\n");
    }

    return 0;
}