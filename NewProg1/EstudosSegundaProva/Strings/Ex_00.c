/*
1) Implemente uma função que receba uma string contendo números inteiros misturados com letras e outros caracteres quaisquer. 
A função deve identificar todos os números presentes na string, somá-los e retornar o valor total dessa soma.
*/

#include <stdio.h>

#define N 100

int soma_numeros(char str[N]){
    int i,numero=0, soma_final=0;

    for(i=0; str[i]; i++){
        if(str[i] > '0' && str[i] < '9'){
            numero = (numero*10) + str[i] - '0';
        } else {
            soma_final +=numero;
            numero = 0;
        }
    }
    soma_final += numero;

    return soma_final;
}


int main(void){
    char str[N];

    printf("Digite: ");
    scanf("%s",str);
    printf("Soma: %d", soma_numeros(str));
} 