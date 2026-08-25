#include <stdio.h>

#define N 5

/*---------------------------*/
int quadradoMagico( int m[N][N]){
    int i,j,principal,secundaria,somaLinha,somaC;
    principal = 0;
    for(i = 0; i < N; i++ ){
        principal += m[i][i];
    }

    secundaria = 0;
    
    for(int i = 0,j = N - 1; i < N; i++,j--){
        secundaria += m[i][j];
    }

    if(secundaria != principal){
        return 0;
    }
}
/*---------------------------*/

int main () {
    int m[N][N] = {
        {11,24,7,20,3}, 
        {4,12,25,8, 16},
        {17,5,13,21,9},
        {10,18,1,14,22},
        {23, 6, 19, 2, 15}
    };



    
}