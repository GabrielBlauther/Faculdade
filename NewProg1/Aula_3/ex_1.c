// Introdução a funções.

#include <stdio.h>

int maior(int a,int b);

int main(){
    int a,b,m;

    printf("Digite um valor: \n");
    scanf("%d %d",&a, &b);

    maior(a,b);
}

maior(int a,int b){
    if(a>b){
        printf("Maior: %d\n", a);
    } else { 
        printf ("Maior: %d\n", b);
    }
}