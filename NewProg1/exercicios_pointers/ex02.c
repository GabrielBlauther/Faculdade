/*
4) Faça uma função que receba como parâmetro uma matriz M[5][5] 
e retorne o maior valor existente na matriz, bem como a linha e coluna onde o valor ocorre.
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

int main(){
    int mat[N][N] = {
        {42,  7, 83, 19, 56},
        {11, 94, 28, 65,  3},
        {76, 350,  9, 51, 88},
        {23, 60, 47, 12, 97},
        {68,  4, 81, 39, 25}
    };
    int coluna, linha, maior;
    qual_maior(mat, &maior,&coluna, &linha); 
    printf("maior = %d, linha: %d coluna: %d", maior,linha, coluna);   
}
