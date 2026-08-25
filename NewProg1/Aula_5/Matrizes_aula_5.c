#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define N 3
/*---------------------------*/
void gera_matriz(int m[N][N]){

    //srand(time(NULL)); //usamos a hora para que a seed comece sempre de um valor diferente

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            m[i][j] = rand() % 100 ;//func rand traz numero aletorios e usamos o % + num para dizer quantas casas trazer
            /*printf("[%d][%d]: ",i,j);
            scanf("%d", &m[i][j]);*/
        }
    }
}
/*---------------------------*/
void escreve_matriz(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%02d]  ",m[i][j]); //essa formatação é de galo veio. 0 é o numero que ira preencher e 5 a quantidade minima de casas
        }
        printf("\n");
    }
}
/*---------------------------*/
void transpostaMatriz(int m[N][N]){
    int aux;
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){//aqui ele pega o indice da linha e soma mais um para pegar a diagonar principal
            aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux; 
        }
    }
}
/*---------------------------*/
int main(){
    int m[N][N];
    gera_matriz(m);
    escreve_matriz(m);
    printf("\n/*---------------------------*/\n");
    transpostaMatriz(m);
    escreve_matriz(m);

}