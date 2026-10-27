/*
3) Considere um vetor de estruturas para representar  os clientes de uma empresa. 
Cada cliente é representado pelo tipo abaixo, onde: id é o identificador do cliente; nome é uma string;
 e compras é um vetor de 12 posições com o total de compras (em reais) em cada um dos meses do ano.

typedef struct clientes {
     int id;
     char nome[100];
     float compras[12];
}CLIENTE; 

Faça uma função que receba como parâmetro um vetor de estruturas
 do tipo CLIENTE e retorne o cliente que teve o maior valor de compras em um ano. 
A quantidade de clientes é definida através da diretiva #define.
*/

#include <stdio.h>
#define N 3

typedef struct clientes{
    int id;
    char nome[100];
    float compras[12];
} CLIENTES;

CLIENTES maior_valor_compras(CLIENTES v[N]){
    CLIENTES maior_cliente;
    int maior=0,soma,i,j;

    for(i=0;i<N;i++){
        soma=0;
        for(j=0;j<12;j++){
            soma+=v[i].compras[j];
        }
        if(i = 0 || maior>soma){
            maior_cliente = v[i];
        }
    }
    return maior_cliente;
}

int main(void){
    CLIENTES clientes[N];
    int i;

    for(i = 0; i < N; i++){
        printf("Digite o nome do cliente: ");
        scanf("%s",clientes[i].nome);
        for(int j = 0; j < 12; j++){
            printf("Digite o valor do gasto do mês %d: ",i+1);
            scanf("%f", &clientes[i].compras[i]);
        }
    }
    CLIENTES vencedor = maior_valor_compras(clientes);
    printf("Cliente gastão: %s ",vencedor );
}