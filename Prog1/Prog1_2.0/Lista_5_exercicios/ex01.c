/*
Exercício 01) Desenvolva um programa em C que solicite ao usuário
informar valores inteiros até que o usuário digite o valor 0 (zero). Quando o valor
0 for digitado, o programa em C deverá parar de solicitar novos valores e deverá
mostrar na tela o menor número informado. Este programa em C deverá
desprezar os números negativos, ou seja, deverá encontrar o menor entre os
valores positivos informados.
*/

#include <stdio.h>

int main(){
    int menor=0,numero;

    printf("Digite um numero(Digite 0 para parar): ");
    scanf("%d",&numero);
    menor=numero;

    while(numero != 0){
 
    printf("Digite um numero(Digite 0 para parar): ");
    scanf("%d",&numero);
        if(numero < menor){
            menor=numero;
        }
    }
    printf("O menor numero digitado foi: %d",menor);

}