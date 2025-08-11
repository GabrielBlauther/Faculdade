/* 5) Dois números naturais possuem divisores comuns. Por exemplo, os divisores comuns dos números
naturais 12 e 20 são 1, 2 e 4. Dentre estes divisores, 4 é o maior. O maior divisor comum de dois ou
mais números é chamado de máximo divisor comum (MDC). Neste exemplo, o máximo divisor comum
de 12 e 20 é 4, ou seja, o MDC(12,20) = 4. Pode-se citar como outros exemplos:
 MDC (6,12) = 6
 MDC (12,18) = 6
 MDC (20,24) = 4
 MDC (12,20,24) = 4
 MDC (6,12,15) = 3
Desenvolva um programa em C que solicite ao usuário informar dois números naturais. O
programa em C deverá calcular e mostrar na tela o MDC destes números.*/

#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Digite dois números naturais: ");
    scanf("%d %d", &a, &b);

    // Algoritmo de Euclides
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O MDC dos dois números é: %d\n", a);
    return 0;
}
