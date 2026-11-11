#include <stdio.h>
#include <stdlib.h>

int * criaVetor(int n){ // retorna um ponteiro pra inteiro (copia)
    int i;
    int *v= (int *) malloc(n* sizeof(int));

    for(i=0; i<n; i++){
        v[i] = i;
    }
    if(v != NULL){
        for(i=0;i<n;i++){
            v[i]= i;
        }
    }
    return v;
}

int main(){
    int i;
    int *vet = criaVetor(5);
    if( vet != NULL){
        for(i=0; i< 5; i++){
            printf("%d\n", vet[i]);
        }
    }
    free(vet);
}