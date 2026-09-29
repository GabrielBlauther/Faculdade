//Palindromo com string


#include <stdio.h>

#define N 100

int tamanho(char str[N]){
    int i, cont=0;

    for( i = 0; str[i] != 0; i++);
    return i;
}

int main(){
    char str[N];

    printf("Digite a string: \n");
    gets(str);

    printf("Tamanho: %d\n", tamanho(str));
}