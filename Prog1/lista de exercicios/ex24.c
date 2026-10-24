/*24) Um inteiro positivo é dito ascendente se, sua representação decimal, possui pelo menos dois
algarismos e, cada um deles é menor do que todos os algarismos situados à sua direita. Por exemplo, o
número 3589 é ascendente pois 3<5<8<9.
Desenvolva um programa em C que solicite ao usuário informar um número inteiro que contenha
no mínimo dois dígitos. O programa em C deverá verificar e mostrar na tela uma mensagem informando
se o número é ascendente.*/

#include <stdio.h>

int main() {
    int num, atual, anterior;
    int ehAscendente = 1;

    printf("Digite um número com pelo menos dois dígitos: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("O número deve ter pelo menos dois dígitos.\n");
        return 0;
    }

    anterior = num % 10;  // último dígito
    num /= 10;

    while (num > 0) {
        atual = num % 10;  // próximo dígito (à esquerda)

        if (atual >= anterior) {
            ehAscendente = 0;
            break;
        }

        anterior = atual;
        num /= 10;
    }

    if (ehAscendente)
        printf("É um número ascendente.\n");
    else
        printf("Não é um número ascendente.\n");

    return 0;
}
