/*
5) Faça uma função que receba por parâmetro um valor inteiro n e retorne um vetor de n inteiros 
alocado dinamicamente com os n primeiros primeiros números primos. 
Faça a função, inicializando as duas primeiras posições com 2 e 3, 
a verificação da primalidade dos números posteriores seja feita dividindo cada 
número apenas pelos primos menores que ele, que já estarão no vetor.
 Se o número não tiver divisores, ocupará a próxima posição livre do vetor.
  O protótipo da função é dado por:

int * primos( int n )
*/



#include <stdio.h>
#include <stdlib.h>

int * primos( int n ){
    int *vet = (int *) malloc(n* sizeof(int));
    int cont=2;
    int num=4;
    int primo;
    vet[0]=2;
    vet[1]=3;

    while(cont != n){
        primo = 1;
        for(int i = 2; i <= num/2 ;i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            vet[cont++]=num;
        }
        num++;
        //printf("%d",cont);
    }
    return vet;
}

int main(){

    int n;
    printf("Quantos nº primos tu quer: ");
    scanf("%d", &n);

    printf("Toma o que é teu: \n");

    int *vet = primos(n);

    for(int i=0; i<n;i++){
        printf("%d ", vet[i]);
    }
}