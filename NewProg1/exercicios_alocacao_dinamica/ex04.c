/*
4) Faça uma função que receba por parâmetro um valor inteiro n e retorne um vetor de n inteiros alocado 
dinamicamente com os n primeiros termos da série de Fibonacci. Lembre-se que os 2 primeiros elementos 
da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
Por exemplo, os 11 primeiros termos da série de Fibonacci são:

0 1 1 2 3 5 8 13 21 34 55 …

O protótipo da função é dado por:

int * fibonacci( int n )
*/

#include <stdio.h>
#include <stdlib.h>

int * fibonacci( int n ){
    int *seq = (int *)malloc(n* sizeof(int));

    seq[0] = 0;
    seq[1] = 1; 
    for(int i=2; i<n;i++){
        seq[i]=seq[i-1]+ seq[i-2];
    }
    return seq;
}

int main(){
    int n;
    printf("Quantos termos? ");
    scanf("%d", &n);

    int *termos = fibonacci(n);
    if(termos){
        for(int i=0; i < n; i++){
            printf("%d ", termos[i]);
        }
        free(termos);
    }
    
}