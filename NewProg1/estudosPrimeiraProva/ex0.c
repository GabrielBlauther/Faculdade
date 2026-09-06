/*
Faça uma  função que receba uma matriz de inteiros com N linhas x M colunas 
(N e M estão definidos pela diretiva #define o programa deve funcionar corretamente para quaisquer valores de N e M).
Após a função deverá inverter a a ordem das colunas (primeira vira última, segunda vira penúltima, etc.).
Restrição: não pode ser utilizada nenhuma matriz auxiliar; a operação deve ser feita alterando a própria matriz original.
*/


#include <stdio.h>

#define N 3
#define M 3

void le_matriz(int m[N][M]){
    int i, j;

    for(i=0; i < N; i++){
        for(j=0; j < M; j++){
            printf("[%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
/*
Função inverte_coluna: inverte os valores das colunas
Observações:
- Tive alguns problemas para identificar como saber quantas vezes trocar as posições porque ela deve funcionar para todas as variantes.
- A solução foi mudar até aonde vai o for das linhas para M - 1 pois se temos uma linha com 3 valores queremos fazer duas trocas 
*/
void inverte_coluna (int m[N][M]){
    int aux,i,j,t;

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            aux= m[i][j];
            m[i][j] = m[i][M-1-j];// 3 - 1 - 0 = 2; 3 - 1 - 1 = 1;
            m[i][M-1-j] = aux;
            printf("\n como esta ficando o indice a cada iteração: %d\n", M-1-j);
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
    escreve_matriz(m);
    printf("\n");
    inverte_coluna(m);
    escreve_matriz(m);
}
 