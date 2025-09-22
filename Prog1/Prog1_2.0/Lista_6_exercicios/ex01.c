/*
Exercício 01) Escreva um programa em linguagem C que receba um
número n (informado pelo usuário) indicando quantos números inteiros serão
digitados. O programa deve ler esses números e ao final imprimir o maior e o
menor valor da sequência. São aceitos todos os números (positivos e negativos).
Dica: Você pode usar uma variável flag ou o contador (em zero) para saber se é
o primeiro número – que nesse cenário será o maior e o menor. Ou, você pode
usar os valores máximos e mínimos suportados pela variável, mas invertidos.
Valor máximo é 2147483647 e mínimo é -2147483647. 
*/
#include <stdio.h>

int main(){

    int n ,maior= -2147483647 , menor=2147483647,i,num;

    printf("Digite quantos numeros deseja: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Digite o %dº numero de %d ",i+1,n);
        scanf("%d",&num);
        if(num>maior){
            maior=num;
        }
        if(num < menor){
            menor = num;
        }
    }
    printf("O maior numero digitado foi %d e o menor %d",maior,menor);
}
