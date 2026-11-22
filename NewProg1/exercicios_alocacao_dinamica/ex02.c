/*
2) Fazer uma função que gere e retorne uma string com N caracteres aleatórios. 
Cada caracter pode ser aleatoriamente escolhido entre qualquer letra maiúscula, minúscula ou dígito. 
O protótipo da função é dado por:

char *aleatoria(int n)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *aleatoria(int n){
    int op;
    int i;
    char *s = (char*) malloc(n* sizeof(char));
    srand(time(NULL));
    if(s != NULL){
        for(i = 0; i<n; i++){
            op = rand() % 3;
            switch(op)
            {
                case 0: s[i] = rand() % 26 + 'A'; break;
                case 1: s[i] = rand() % 26 + 'a'; break;
                case 2: s[i] = rand() % 10 + '0'; break;
            }
        }
    }
    s[i] = '\0';
    return s;
}

int main(){
    char *str= aleatoria(18);
    printf("%s", str);
}