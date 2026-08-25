#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 4
/*---------------------------*/

void escreve_matriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%d]  ",m[i][j]); //essa formatação é de galo veio. 0 é o numero que ira preencher e 5 a quantidade minima de casas
        }
        printf("\n");
    }
}
/*---------------------------*/
int identidade(int m[N][N]){
    for(int i = 0; i < N; i++ ){
        for(int j = 0; j< N; j++){
            if( i == j && m[i][j] != 1){
                return 0;
            }else if (i != j && m[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}
/*---------------------------*/

int main () {
    int m[N][N] = {
        {1,0,0,0}, 
        {0,1,0,0},
        {0,0,1,0},
        {0,0,0,1}
    };
    escreve_matriz(m);

    if(identidade(m)){
        printf("\n\nÉ identidade\n\n");
    }else{
        printf("\n\nNão é identidade\n\n");
    }
}

