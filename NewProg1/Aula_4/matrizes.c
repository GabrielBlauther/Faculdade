#include <stdio.h>

#define N 3
/*---------------------------*/
void le_matriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d", &m[i][j]);
        }
    }
}
/*---------------------------*/
void escreve_matriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%05d]  ",m[i][j]); //essa formatação é de galo veio. 0 é o numero que ira preencher e 5 a quantidade minima de casas
        }
        printf("\n");
    }
}

int main(){
    int m[N][N];

    le_matriz(m);
    escreve_matriz(m);

}