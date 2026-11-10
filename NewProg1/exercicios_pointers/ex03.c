/*
5) Na Teoria de Sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha em que se encontra o maior elemento da matriz. 
Faça uma função que receba como parâmetro uma matriz A[5][5] e retorne o valor do elemento minimax, bem como a linha e coluna onde ocorreu.
*/


#include <stdio.h>
#define N 5

void qual_maior(int mat[N][N],int *maior,int *col,int *lin){
    int j,i;

    for(i=0; i < N; i++){
        for(j=0; j < N; j++){
            
            if(i==0 && j==0){*maior= mat[i][j]; *col=j;*lin=i;}
            else{
                if(*maior < mat[i][j]){
                    *maior = mat[i][j];
                    *col=j;
                    *lin=i;
                }
            }
        }
    }
}

void minimax(int mat[N][N],int *minimax_1){
    int i, maior, col, lin;
    qual_maior(mat, &maior,&col, &lin);
    *minimax_1 = mat[lin][0];
    for(i=0; i < 5;i++){
        if(mat[lin][i] < *minimax_1){
            *minimax_1 = mat[lin][i];
        }

    }

}



int main(){
    int minimax_1;
    int mat[N][N] = {
        {42,  7, 83, 19, 56},
        {11, 94, 28, 65,  3},
        {75, 350,  9, 51, 88},
        {23, 60, 47, 12, 97},
        {68,  4, 81, 39, 25}
    };
    minimax(mat,&minimax_1); 
    printf("minimax = %d", minimax_1);   
}