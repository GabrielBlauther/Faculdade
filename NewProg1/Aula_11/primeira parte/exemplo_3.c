#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;// "Aux recebe o valor apontado por A, neste caso 9"
    *a = *b;
    *b = aux;
}


int main(){
    int a = 9, b = 8;

    troca(&a, &b);
    printf("A= %d B= %d", a,b);
}