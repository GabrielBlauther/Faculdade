/*
7) Faça uma função com o seguinte cabeçalho : 

void concatena (char original[100], int numero, char final[100]).

A função deverá receber uma string de no máximo 100 caracteres e um número inteiro positivo. 
A função deverá retornar em uma outra string o número concatenado ao final da string original.
*/

#include <stdio.h>
#include <string.h>
#define N 100

void concatena (char original[N], int numero, char final[N]){
    int i,cont=0,vet[N],vet_cont=0,tamanho_vet;

    while(numero>0){
        vet[vet_cont++]=numero%10 + '0';
        numero/=10;
    }
    tamanho_vet=vet_cont;
    vet_cont--;
    for(i=0;original[i];i++){
        final[cont++] = original[i];
    }
    for(i=cont;i < strlen(original) + tamanho_vet;i++){
        final[i]=vet[vet_cont--];
    }
    final[i]='\0';
}

int main(){
    char str[N], final[N];
    int inteiro;
    

    printf("Digite a string: ");
    scanf("%s",str);
    printf("Digite um numero: ");
    scanf("%d", &inteiro);
    concatena (str,inteiro,final);
    printf("\n%s\n",final);
}