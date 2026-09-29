/*1)  Fazer um programa que leia uma letra (L) e um número (N), a seguir gere uma string contendo N letras L.*/

#include <stdio.h>

void escreve_l(int N, char l, char str[N]){
    int i ;

    for(i=0; i<N; i++){
        str[i]=l; 
    }
    str[i]='\0';

    for(i=0;str[i];i++){
        printf("%c", str[i]);
    }
}

int main(){
    int N ;
    char l;

    printf("Digite uma letra: ");
    scanf("%c", &l);

    printf("Quantidade de vezes que precisa repetir: ");
    scanf("%d",&N);
    
    char str[N + 1];

    escreve_l(N,l,str);
}