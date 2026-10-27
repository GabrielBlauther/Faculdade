/*
 Considere um programa que armazena os dados referentes aos eventos realizados por uma empresa 
 como um vetor de dados do tipo EVENTO, definido conforme o tipo estruturado a seguir:

struct evento {
    char nome[50];
    DATA data_evento;
};
typedef struct evento EVENTO;

O campo data_evento, que representa o dia, mês e ano que o evento foi realizado, é um campo do tipo DATA, descrito a seguir:

struct data {
     int d, m, a;
};
typedef struct data DATA;

Escreva uma função em C que recebe como parâmetros um vetor do tipo EVENTO e calcule a quantidade de eventos que ocorreram em cada mês do ano. 
A função deverá gerar um histograma mostrando essa contagem. O histograma deve ser exibido no seguinte formato: 
*/

#include <stdio.h>
#define N 3

typedef struct data{
    int a,m,d;
} DATA;

typedef struct evento{
    char nome[50];
    DATA data_evento;
} EVENTO;

void histograma(EVENTO vet[N]){
    int vet_aux[12]={0};
    int i;
   
   for(i = 0; i < N; i++){
    vet_aux[vet[i].data_evento.m - 1]++;
   }
    printf("Quantidade de ocorrencia nos seguintes messes: ");
    for(i = 0; i < 12; i++ ){
        printf("Mês: %d\n Total de ocorrências: %d\n", i+1, vet_aux[i]);
    }        
}


int main(void){
    EVENTO evento[N];
    int i;

    for(i = 0; i < N; i++){
        printf("Digite o nome do evento: ");
        scanf("%s",evento[i].nome);
        printf("Digite o ano mês e dia");
        scanf("%d%d%d", &evento[i].data_evento.a,&evento[i].data_evento.m,&evento[i].data_evento.d);
    }
    histograma(evento);
}