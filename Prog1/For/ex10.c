/*10) Desenvolva um programa em C que solicite ao usuário informar 15 valores inteiros. O programa em
C deverá contar quantos valores estão nos intervalos [0,25],(25,50], (50,75], (75,100] , isto é, são
valores maiores que 0 e menores ou iguais a 25, maiores que 25 e menores ou iguais a 50,.. O
programa em C deverá mostrar na tela a quantidade de valores dentro de cada um dos intervalos
solicitados. */

#include <stdio.h>

int main() {
    int valor;
    int intervalo1 = 0; // [0, 25]
    int intervalo2 = 0; // (25, 50]
    int intervalo3 = 0; // (50, 75]
    int intervalo4 = 0; // (75, 100]

    for (int i = 1; i <= 15; i++) {
        printf("Digite o %dº valor inteiro: ", i);
        scanf("%d", &valor);

        if (valor >= 0 && valor <= 25) {
            intervalo1++;
        } else if (valor > 25 && valor <= 50) {
            intervalo2++;
        } else if (valor > 50 && valor <= 75) {
            intervalo3++;
        } else if (valor > 75 && valor <= 100) {
            intervalo4++;
        }
        // Valores fora dos intervalos são ignorados
    }

    printf("\nQuantidade de valores em cada intervalo:\n");
    printf("[0, 25]: %d\n", intervalo1);
    printf("(25, 50]: %d\n", intervalo2);
    printf("(50, 75]: %d\n", intervalo3);
    printf("(75, 100]: %d\n", intervalo4);

    return 0;
}
