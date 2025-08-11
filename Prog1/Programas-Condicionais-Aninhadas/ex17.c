/* 17) Desenvolva um programa que solicite ao usuário informar 3 valores a, b e c, coeficientes de uma
equação de segundo grau. Calcule e mostre na tela as raízes da equação em ordem crescente. Se a
equação não tiver raízes reais, mostre na tela a mensagem "A equação não possui raízes reais". As
raízes de uma equação podem ser calculadas pela fórmula de Baskhara:
x=
−b∓√b
2−4 .a. c
2. a . Uma equação não possui raízes se reais se b
2−4 .a .c<0 .
Exemplo: se o usuário informar na tela os valores a = 1, b= 2, c=3, o programa deverá mostrar
na tela a mensagem "A equação não possui raízes reais". Se o usuário informar os valores a = 1, b= 8,
c=7, o programa deverá calcular e mostrar na tela os valores -7 e -1 (ordem crescente de valores!).*/

#include <stdio.h>
#include <math.h> // Biblioteca necessária para sqrt()

int main() {
    float a, b, c, delta, x1, x2;

    // Entrada de dados
    printf("Digite os coeficientes a, b e c da equação de segundo grau:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Se 'a' for 0, não é uma equação de segundo grau
    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
    } else {
        // Cálculo do discriminante (Δ)
        delta = (b * b) - (4 * a * c);

        // Verificação se há raízes reais
        if (delta < 0) {
            printf("A equação não possui raízes reais.\n");
        } else {
            // Cálculo das raízes
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            // Garantir que as raízes sejam exibidas em ordem crescente
            if (x1 > x2) {
                float temp = x1;
                x1 = x2;
                x2 = temp;
            }

            // Saída formatada
            printf("As raízes da equação são: %.2f e %.2f\n", x1, x2);
        }
    }

    return 0;
}
