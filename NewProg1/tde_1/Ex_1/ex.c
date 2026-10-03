/*
1) Faça um programa em linguagem C que leia uma string e verifique se essa corresponde a um endereço de IP (Internet Protocol) válido. 
Um IP corresponde a uma sequencia de 4 valores numéricos compreendidos  no intervalo [0-255] e separados entre si por um carácter “.” .
*/

#include <stdio.h>

#define N 100

int tamanho(char str[N]){
    int i;
    for(i = 0; str[i];i++);
    return i;
}

int verifica_ip(char str[N]){
    int i,soma=0,cont=0;
    for(i=0;str[i];i++){
        if(i==0 && str[i] < '0' || str[i] > '9' ){
            return 0;
        }
        if( i == (tamanho(str)-1)){
            if(str[i] < '0' || str[i] > '9'){
                return 0;
            }
        }
        if(str[i] == '.' && str[i-1] != '.' && str[i+1] != '.'){        
            printf("\n valor do soma: %d ", soma);
            if(soma > 255 || soma < 0){
                return 0;
            }
            soma=0;
            cont++;

        }
        else if(str[i] >= '0' && str[i] <= '9' ){
            soma= soma * 10 + (str[i] - '0');
        }else {
            return 0;
        }
        if(soma > 255 || soma < 0){
            return 0;
        }
        if(cont != 4){
            return 0;
        }
    }
    return 1;
}

int main(){
    char ip[N];

    printf("Digite seu ip: ");
    gets(ip);

    if(verifica_ip(ip)){
        printf("\nÉ um ip válido\n");
    } else{
        printf("\nIp inválido.");
    }
}