/*
1) Faça uma  função que receba uma matriz de inteiros com N linhas x M colunas 
(N e M estão definidos pela diretiva #define o programa deve funcionar corretamente para quaisquer valores de N e M).  
Após a função deverá inverter a a ordem das colunas (primeira vira última, segunda vira penúltima, etc.).  
Restrição: não pode ser utilizada nenhuma matriz auxiliar; a operação deve ser feita alterando a própria matriz original
*/

#include <stdio.h>

#define N 3
#define M 3

void inverter_colunas(int mat[N][M]){
    int lin,col,aux;
    
    for(lin = 0 ; lin < N ; lin++){
        for(col = 0; col < M/2; col++ ){// deve ser a metade pois se deixar o valor inteiro ele vai trocar todos para o mesmo lugar novamente. 
            aux=mat[lin][col];
            mat[lin][col]= mat[lin][M - 1 - col];
            mat[lin][M - 1 - col] = aux;
        }
    }

}


int main(){
    int m[N][M] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                   };
    inverter_colunas(m);
}