#include <stdio.h>

#define N 3
#define M 4 


void escreveMatriz(int m[N][M]){
    int i, j;

    for(i=0; i<N; i++){
        for(j=0; j < M; j++){
            printf("% 4d", m[i][j]);
        }
        printf("\n");
    }
}

void ordenaLinhas(int m[N][M]){
    int i,j,k, aux;

    for(j=0; j< N-1; j++){
        for(i=0; i< N - 1; i++ ){
            for(k=0; k < M; k++){
                aux = m[i][k];
                m[i][k] = m[i+1][k];
                m[i + 1][k]= aux;
            }
        }
    }
}


int main(){
    int m[N][M] = {
                    {2,8,5,2},
                    {9,7,6,9},
                    {3,1,9,6}
                   };
    escreveMatriz(m);
}