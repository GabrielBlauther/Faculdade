#include <stdio.h>
#include <stdlib.h>

void criaVetor(int n){
    int i;
    int v[n];
    for(i=0; i<n; i++){
        printf("%d\n", *(v+i));
    }
}

int main(){
    int i, *v;
    //v= (int *) malloc(5* sizeof(int));// sizeof para saber o tamanho (int *) indica o tamanho do dado apontado pelo pointer
    v= (int *) calloc(5,  sizeof(int)); // alocamos os valores no caso 5 elementos de tamanho int (4)
    if(v == NULL){
        printf("Erro na alocacao \n");
        return 0;
    }
    escreve(v,5);
    free(v);//desacolar a variavel
}