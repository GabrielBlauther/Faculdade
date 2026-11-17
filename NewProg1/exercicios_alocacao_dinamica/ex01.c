/*
1) Fazer uma função que gere e retorne uma string S com N caracteres C. O protótipo da função é dado por:

char * gerastr(int n, char c)
*/

#include <stdio.h>
#include <stdlib.h>

char * gerastr(int n, char c){
    int i;
    char *v = (char*) malloc(n* sizeof(char));

    if(v != NULL){
        for(i=0; i < n ; i++){
            v[i] = c;
        }
    }
    return v;
}

int main(){
    int i;
    char *vet = gerastr(3,'z');

    if( vet != NULL){
        for(i=0; i< 3; i++){
            printf("%c\n", vet[i]);
        }
    }
    free(vet);
}