#include <stdio.h>
#define N 5

void le_vetor(int v[N]){ //void para quando não retorna nada
    int i;
    for(i = 0; i<N; i++){
        printf("Digite o numero do vetor de posição %d: ", i);
        scanf("%d", &v[i]);
    }
}
void escreve_vetor(int v[N]) {
    int i;
    for(i=0;i<N;i++){
        printf("vetor[%d] = %d \t ",i , v[i]);
    }
}
void ordena_vetor(int v[N]){
   int i, j, temp;
   
   for(i=0;i < N - 1; i++){
        for(j=0; j < N - 1 - i;i++){
            if(v[j] > v[j+1]){
                temp = v[1];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
   }
}
int main() {

    int v[N];

    le_vetor(v);
    ordena_vetor(v);
    escreve_vetor(v);

}