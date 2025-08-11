/*18) Fazer um programa que leia o valor de dois lados de um triângulo e o ângulo entre estes lados em
graus (a,b,α), calcule e escreva a área deste triângulo.
Área= a.b.sen (α)
2
lembre-se de converter o ângulo de graus para radianos ( π radianos
correspondem a 180°).*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, angulo, area;

    // Leitura dos lados e do ângulo
    printf("Digite o valor do primeiro lado (a): ");
    scanf("%lf", &a);
    printf("Digite o valor do segundo lado (b): ");
    scanf("%lf", &b);
    printf("Digite o valor do ângulo entre os lados (em graus): ");
    scanf("%lf", &angulo);

    // Converter o ângulo de graus para radianos
    double anguloRad = angulo * M_PI / 180.0;

    // Cálculo da área usando a fórmula
    area = 0.5 * a * b * sin(anguloRad);

    printf("A área do triângulo é: %.2lf\n", area);

    return 0;
}
