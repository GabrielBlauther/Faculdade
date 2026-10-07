#include <stdio.h>
#define N 33


void dec2bin(char str[N], int n){

    int i=0,r;
    int f=0;
    int tamanho;
    char aux;


    while(n>0){
        r= n%2;
        str[i++]=r+'0';//transforma para caractere 
        n/=2; // diminui o valor de n para o digito já lido
    }
    str[i]='\0';// finalizar o vetor no final dos digito

    f = i - 1; // pegamos a ultima posição, o -1 é por conta do '\0' no final do vetor
    tamanho = i;

    for(i = 0; i < tamanho/2; i++, f--){
        aux = str[i];
        str[i] = str[f];
        str[f] = aux;
    }
}


int main(){

    char str[N];
    int n;

    printf("Digite o decimal: \n");
    scanf("%d", &n);
    dec2bin(str, n);

    printf("%s\n", str);
}