/*
Desenvolva um projeto em C que trabalhe com matrizes utilizando modularização
por funções.
O programa deverá:
● Definir os valores de linha e coluna utilizando #define;
● Criar uma matriz com as dimensões definidas;
● Implementar três funções separadas do main:
○ Uma função para ler os valores da matriz digitados pelo usuário;
○ Uma função para gerar valores aleatórios entre 0 e 99 e armazenar na matriz;
○ Uma função para imprimir a matriz na tela;
● Cada uma dessas operações deve estar em uma função distinta.
*/

#include <stdio.h>
#define NUM  3

int matriz[NUM][NUM];

void ler_matriz(int m[NUM][NUM]);
void valores_aleatorios(void);
void print_matriz(void);

int main(void)
{
    int i, j ;
}