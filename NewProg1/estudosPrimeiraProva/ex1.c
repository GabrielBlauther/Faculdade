/*
2) Faça uma  função que receba uma matriz de inteiros com N linhas x M colunas 
(N e M estão definidos pela diretiva #define o programa deve funcionar corretamente para quaisquer valores de N e M). 
Após a função deverá determinar qual a coluna que possui a maior soma dos elementos,
trocando todos os valores dessa coluna pelos valores que estão na primeira coluna dessa matriz. 
*/

#include <stdio.h>

#define N 4
#define M 3

void ordenar_matriz (int mat[N][M]){
    int i, j, aux, maior, maiorColuna, temp;

    for(i=0;i<N;i++){
        temp= 0;
        for(j=0;j<M;j++){
            temp += mat[i][j];
        }
        if(i==0){
            maior = temp;
            maiorColuna = i;

        }
        else if (maior < temp){
            maior = temp;
            maiorColuna = i;
        }
    }
    for(i=0;i < 1;i++){
        for(j=0;j<M;j++){
            aux=mat[i][j];
            mat[i][j]=mat[maiorColuna][j];
            mat[maiorColuna][j] = aux;
        }
    }
}


void escreve_matriz(int m[N][M]){
    int i, j;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("[%02d]  ",m[i][j]);
        }
        printf("\n");
    }
}

int main(){    
    int m[N][M] = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
               };
    ordenar_matriz(m);
    escreve_matriz(m);
}