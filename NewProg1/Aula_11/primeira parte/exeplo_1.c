#include <stdio.h>

void troca(int a, int b){
    int aux = a;
    a = b;
    b = aux;
}


int main(){
    int a = 9, b = 8;

    troca(a,b);
    printf("A= %d B= %d", a,b);
}