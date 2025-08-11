/*23) Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. O
programa em C deve mostrar na tela os dígitos formantes desse número em ordem crescente.
Exemplo: se o usuário digitar o valor 86934, o programa em C deverá mostrar na tela os
números 3,4,6,8 e 9.*/
#include <stdio.h>

int main() {
    int num, copia, resto;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Dígitos em ordem crescente: ");

    for (int d = 0; d <= 9; d++) { // d = dígito de 0 a 9
        copia = num;
        while (copia != 0) {
            resto = copia % 10;
            if (resto == d) {
                printf("%d ", d);
                break; // para evitar imprimir o mesmo dígito várias vezes
            }
            copia /= 10;
        }
    }

    printf("\n");
    return 0;
}
