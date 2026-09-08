/*
2) 
Faça uma  função que receba uma matriz de inteiros com N linhas x M colunas 
(N e M estão definidos pela diretiva #define o programa deve funcionar corretamente para quaisquer valores de N e M). 
Após a função deverá determinar 
qual a coluna que possui a maior soma dos elementos, trocando todos os valores dessa coluna pelos valores que estão na primeira coluna dessa matriz.
*/

#include <stdio.h>

#define N 3
#define M 3

void  ordenar_matriz (int mat[N][M]){
    int i,j,aux,maiorC,maiorSoma,temp;

    for(j=0;j<M;j++){
        temp=0;
        for(i=0;i<N;i++){
            temp += mat[i][j]; //Quem varia é o i e o j que é a coluna fica fixa durante o for
        }
        if(j == 0){
            maiorSoma=temp;
            maiorC=j;
        }
        else if(maiorSoma < temp){
            maiorSoma = temp;
            maiorC=j;
        }
    }
    for(i=0;i<N;i++){
        aux=mat[i][0];
        mat[i][0] = mat[i][maiorC];
        mat[i][maiorC] = aux;
    }
}



int main(){
    int m[N][M] = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
               };
}