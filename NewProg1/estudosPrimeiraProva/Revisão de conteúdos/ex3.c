/*
3) Faça uma função em C que receba uma matriz quadrada M x N (com M e N definidos pela diretiva #define),
uma posição inicial (linha_inicial, coluna_inicial) e uma posição final (linha_final, coluna_final). 
A função deve percorrer a matriz por colunas, somando todos os valores do elemento da posição inicial até o elemento da posição final, 
e retornar o resultado como um int.
*/

#include <stdio.h> 

#define N 4
#define M 4

int soma_matriz(int mat[M][N], int li, int ci, int lf, int cf){
    int i,j,inicio,fim,soma=0;

    for(j=ci;j<=cf;j++){// o for vai começar da coluna inicial e vai até a coluna final o nosso real problema aqui é a linha
        inicio=0; // temos que entender que precisamos controlar as colunas aqui e antes de começar as linhas a gente precisa manipular a inicialização e a finalização da matriz.
        fim=M-1;
        if(j == ci){//precisamos olha para a coluna, se for a primeira dai começamos pelo indice sinalizado pelo user
            inicio = li;
        }
        if(cf == j ){ //mesma coisa, se estivermos na ultima linha a ser buscada precisamos que ele va até a ultima linha apenas
            fim = lf;
        }

        for(i = inicio; i<= fim; i++){
            soma+=mat[i][j];
        }
    }
    return soma;
}




int main(){
    int m[M][N] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15}
            };
}