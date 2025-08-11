/*8) Desenvolva um programa em C que solicite ao usuário informar dois números inteiros N1 e N2. O
programa em C deve mostrar na tela os números primos entre N1 e N2 (incluindo N1 e N2 se algum
deles for primo) e a soma destes números.
Exemplo: se o usuário informar os números 600 (N1) e 700 (N2), o programa em C deverá
mostrar na tela os números 601,607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683 e
691 e a soma 10316. */
#include <stdio.h>

int main() {
    int N1, N2, i, j, ehPrimo, soma = 0;

    printf("Digite o primeiro número (N1): ");
    scanf("%d", &N1);

    printf("Digite o segundo número (N2): ");
    scanf("%d", &N2);

    // Garantir que N1 seja o menor
    if (N1 > N2) {
        int temp = N1;
        N1 = N2;
        N2 = temp;
    }

    printf("Números primos entre %d e %d:\n", N1, N2);

    for (i = N1; i <= N2; i++) {
        if (i < 2) continue; // ignorar números menores que 2

        ehPrimo = 1; // assumimos que é primo

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }

        if (ehPrimo) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos números primos: %d\n", soma);

    return 0;
}
