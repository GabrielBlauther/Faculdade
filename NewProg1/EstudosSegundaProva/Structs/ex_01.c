/*
1) Implemente uma função em C que receba um vetor de estruturas contendo informações sobre eventos em um dia. 
O tamanho do vetor é definido por um valor N especificado pela diretiva #define. Cada estrutura possui os seguintes campos:

typedef struct horario { 
    int hora;    // 0 a 23 
    int minuto;  // 0 a 59 
} HORARIO; 

typedef struct evento { 
    char descricao[100]; 
    HORARIO tempo;
} EVENTO; 

Desenvolva uma função 
chamada ordenarPorHorario que receba como parâmetros um vetor de estruturas EVENTO contendo todos os eventos do dia e organize os eventos em ordem crescente de horário. 
O protótipo da função deve ser:

void ordenarPorHorario(EVENTO eventos[N]);
*/

#include <stdio.h>

#define N 4

typedef struct horario {
    int hora;
    int minuto;
} HORARIO;

typedef struct evento {
    char descricao[100];
    HORARIO tempo;
} EVENTO;

void ordenarPorHorario(EVENTO eventos[N]){
    int i, j; EVENTO aux;

    for(i = 0; i < N; i++){
        for(j = 0; j < N - 1 - i; j++ ){
            if((eventos[j].tempo.hora * 60 + eventos[j].tempo.minuto) > (eventos[j+1].tempo.hora * 60 + eventos[j+1].tempo.minuto)){
                aux = eventos[j];
                eventos[j] = eventos[j+1];
                eventos[j+1] = aux;
            }
        }
    }
}

void escreve_vetor(EVENTO eventos[N]){
    int i;

    for(i=0;i < N;i++){
        printf("%dº %s às %02d:%02d" ,i , eventos[i].descricao, eventos[i].tempo.hora,eventos[i].tempo.minuto);
    }
}


int main(void){
    EVENTO eventos[N];
    int i;
    for(i=0; i < N; i++){
        printf("Digite o nome do evento: ");
        scanf("%s", eventos[i].descricao);
        printf("Digite a hora e o minuto: ");
        scanf("%d%d",&eventos[i].tempo.hora, &eventos[i].tempo.minuto);
    }
    ordenarPorHorario(eventos);
    escreve_vetor(eventos);
}