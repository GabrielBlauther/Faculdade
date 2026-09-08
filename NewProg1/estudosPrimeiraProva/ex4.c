/*
5) Faça uma função que receba uma matriz quadrada N x N (com N definido pela diretiva #define). 
Para cada coluna da matriz, identifique o maior elemento e troque-o com o elemento da diagonal principal que está na mesma coluna. 
A operação deve ser realizada diretamente na matriz original. 
A função deve funcionar corretamente para qualquer valor de N.
*/

#include <stdio.h>

#define N 4

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/
void troca_maior_coluna_diagonal(int mat[N][N]){
    int lin, col, aux, maior,maiorL;

    for(col = 0; col<N;col++){
        maior=mat[0][col];
        maiorL=0;
        for(lin = 0; lin<N;lin++){
            if(maior < mat[lin][col]){
                maior = mat[lin][col];
                maiorL=lin;
            }
        }
        if(maior > mat[col][col]){
            aux = mat[col][col];
            mat[col][col] = mat[maiorL][col];
            mat[maiorL][col]= aux;
        }
    }


}
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

int main(){
    int m[N][N]= {
                  {1,5,2,7},
                  {7,2,8,1},
                  {4,6,9,0},
                  {3,1,7,5}
                  };

    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            printf("[%02d]  ", m[lin][col]);
        }
        printf("\n");
    }                  
    printf("\n depois \n");
    troca_maior_coluna_diagonal(m);
    for (int lin = 0; lin < N; lin++) {
        for (int col = 0; col < N; col++) {
            printf("[%02d]  ", m[lin][col]);
        }
        printf("\n");
    }
}