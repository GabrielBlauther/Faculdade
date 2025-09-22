/*
| Exercício 03) Escreva um programa que leia um número inteiro e
verifique se ele é primo. Um número primo é um número natural maior que 1 que
só pode ser dividido de forma exata por 1 e por ele mesmo, ou seja, ele tem
exatamente dois divisores: o número 1 e o próprio número. Exemplos de
números primos: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29. O número 8 não é primo,
porque além de ser divisível por 1 e por 8, também é divisível por 2 e por 4.
*/

#include <stdio.h>

int main(){
    int i,num,primo=1;

    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
            printf("Não é primo");
            primo = 0;
            break;
        }
    }
    if(primo == 1){
        printf("É um numero primo");
    }
}