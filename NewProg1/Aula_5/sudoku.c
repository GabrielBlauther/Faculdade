#include <stdio.h>

#define N 5

/*---------------------------*/
int quadradoMagico( int m[N][N]){
    int i,j,principal,secundaria,somaLinha,somaColuna;

    //diagonal principal e secundaria

    secundaria = 0;
    principal = 0;

    for(i = 0; i < N; i++ ){
        principal += m[i][i];
        secundaria += m[i][N - 1 - i];
    }

    if(secundaria != principal){
        return 0;
    }

    // Linhas e colunas
    for(i = 0; i < N; i++ ){
        somaLinha = 0;
        somaColuna = 0;
        for(j = 0; j < N; j++ ) {
            somaLinha += m[i][j];
            somaColuna += m[j][i];
        }
        
        if(principal != somaLinha || somaColuna != principal ){
            return 0;
        }
    }
    //Se passar por todas ele retorna verdadeiro
    return 1;

}
/*---------------------------*/

int main () {
    int m[N][N] = {
        {11,24, 7, 20, 3}, 
        { 4,12,25, 8, 16},
        {17, 5,13, 21, 9},
        {10,18, 1, 14,22},
        {23, 6,19, 2, 15}
    };

    if(quadradoMagico(m)){
        printf("\n\nÉ quadrado mágico\n\n");
    }else{printf("\n\nNão é quadrado mágico\n\n");}


    
}