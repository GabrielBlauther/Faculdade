#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 3
/*---------------------------*/
void le_matriz(int m[N][N]){

    //srand(time(NULL)); //usamos a hora para que a seed comece sempre de um valor diferente

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            m[i][j] = rand() % 10;
            /*printf("[%d][%d]: ",i,j);
            scanf("%d", &m[i][j]);*/
        }
    }
}
/*---------------------------*/

int principal(int m[N][N]){
    int s = 0;

    for(int i = 0; i < N; i++){
        s += m[i][i];
    }

    return s;
}
int secundaria(int m[N][N]){
    int s = 0;
    int j;

    for(int i = 0,j = N - 1; i < N; i++,j--){
        s += m[i][j];
    }

    return s;
}

void escreve_matriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%02d]  ",m[i][j]); //essa formatação é de galo veio. 0 é o numero que ira preencher e 5 a quantidade minima de casas
        }
        printf("\n");
    }
}

int main(){
    int m[N][N];

    le_matriz(m);
    escreve_matriz(m);
    printf("\nSoma da principal: %d ",principal(m));
    printf("\nSoma da secundaria: %d\n ",secundaria(m));


}