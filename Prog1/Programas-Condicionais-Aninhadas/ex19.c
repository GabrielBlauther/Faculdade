/* 19) Desenvolva um programa que solicite ao usuário informar três valores inteiros. Após verifique se os
três valores podem ser os comprimentos dos lados de um triângulo de acordo com a classificação
abaixo. Como resultado do processamento, o programa deverá mostrar na tela uma mensagem
indicando qual o tipo de triângulo os três lados informados formam. */

#include <stdio.h>

int main() {
    int n1, n2, n3, aux;

    printf("Digite o valor de 3 lados de um triângulo:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    // Ordenação dos lados (garante que n3 seja o maior)
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n1 > n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }

    // Verifica se forma um triângulo
    if (n1 + n2 > n3) {
        if ((n3 * n3) == (n2 * n2) + (n1 * n1))
            printf("É um triângulo retângulo\n");
        else if ((n3 * n3) > (n2 * n2) + (n1 * n1))
            printf("É um triângulo obtusângulo\n");
        else
            printf("É um triângulo acutângulo\n");

        // Classificação quanto aos lados
        if (n1 == n2 && n2 == n3)
            printf("É um triângulo equilátero\n");
        else if ((n1 == n2 && n2 != n3) || (n2 == n3 && n1 != n3))
            printf("É um triângulo isósceles\n");
        else
            printf("É um triângulo escaleno.\n");

    } else {
        printf("Não forma um triângulo\n");
    }

    return 0;
}
