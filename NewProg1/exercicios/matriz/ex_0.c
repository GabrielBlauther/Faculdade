/*M00000100 - Faça um algoritmo que leia uma matriz M[1..5,1..5] e calcule e escreva a soma dos
elementos da diagonal principal.*/

#include <stdio.h> 

#define N 3

/*---------------------------------*/
void le_matriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

/*---------------------------------*/
void escreve_matriz(int m[N][N]){
    for(int i=0 ; i < N; i++){
        for(int j = 0; j<N; j++){
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }
}
/*---------------------------------*/

int main(void){
    int m[N][N];

    le_matriz(m);
    escreve_matriz(m);

}