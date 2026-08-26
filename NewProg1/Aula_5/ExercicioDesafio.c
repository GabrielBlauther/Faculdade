#include <stdio.h> 

#define N 4

escreve(int m[N][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("[%02d]  ",m[i][j]); //essa formatação é de galo veio. 0 é o numero que ira preencher e 5 a quantidade minima de casas
        }
        printf("\n");
    }
}

void soma(int m[N][N], int v[N+1]){
    int soma;
    int vai;
    vai = 0;
    for(int j = N-1; j >= 0; j--){
        soma = vai;
        for (int i = 0; i<N; i++){
            soma+=m[i][j];
        }
        v[j+1] = soma % 10;
        vai = soma / 10;
    }
    v[0] = vai;
    
}

int main () {
    int m [N][N] = {{8,1,9,7},{9,2,5,6},{1,6,7,8},{7,8,9,1}};
    int i , v[i+1];

    soma(m, v);

    for( i = 0; i< N+1; i++){
        printf("%d", v[i]);
    }


}