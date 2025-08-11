/*  21) Desenvolva um programa que solicite ao usuário digitar as três dimensões (largura, comprimento e
altura) de duas caixas. O programa deve verificar se a primeira caixa pode ser colocada dentro da
segunda caixa. Considere que as caixas podem ser rotacionadas em qualquer direção. Após realizar a
verificação, mostrar na tela uma mensagem se é possível ou não colocar a primeira caixa dentro da
segunda.
Para desenvolver este programa, temos que verificar se a menor medida da primeira caixa é
menor que a menor medida da segunda caixa, se a medida intermediária da primeira caixa é menor
que medida intermediária da segunda caixa e se a maior medida da primeira caixa é menor que a
maior medida da segunda caixa.*/
#include <stdio.h>

// Função para ordenar as dimensões de uma caixa em ordem crescente
void ordenar(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    int largura1, comprimento1, altura1;
    int largura2, comprimento2, altura2;

    // Solicita as dimensões da primeira caixa
    printf("Digite as dimensões da primeira caixa (largura, comprimento, altura): ");
    scanf("%d %d %d", &largura1, &comprimento1, &altura1);

    // Solicita as dimensões da segunda caixa
    printf("Digite as dimensões da segunda caixa (largura, comprimento, altura): ");
    scanf("%d %d %d", &largura2, &comprimento2, &altura2);

    // Ordena as dimensões das caixas
    ordenar(&largura1, &comprimento1, &altura1);
    ordenar(&largura2, &comprimento2, &altura2);

    // Verifica se a primeira caixa pode ser colocada dentro da segunda
    if (largura1 < largura2 && comprimento1 < comprimento2 && altura1 < altura2) {
        printf("A primeira caixa pode ser colocada dentro da segunda caixa.\n");
    } else {
        printf("A primeira caixa NÃO pode ser colocada dentro da segunda caixa.\n");
    }

    return 0;
}
