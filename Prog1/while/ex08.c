/*  8) Os números naturais podem ser escritos através da multiplicação de números primos. A
decomposição do número é feita através da divisão dele pela seguinte sequência de números primos: 2,
3, 5, 7, 11, 13, 17, 19 e assim por diante.
Desenvolva um programa em C que solicite ao usuário informar um número natural. O programa
em C deve efetuar sua fatoração, mostrando na tela os fatores que o compõem. */
#include <stdio.h>

int main() {
    int num, divisor = 2;

    printf("Digite um número natural maior que 1: ");
    scanf("%d", &num);

    printf("Fatores primos de %d: ", num);

    while (num > 1) {
        if (num % divisor == 0) {
            printf("%d ", divisor);
            num = num / divisor;
        } else {
            divisor++;
        }
    }

    printf("\n");

    return 0;
}
