/* 41) Desenvolva um programa que solicite ao usuário informar um valor inteiro em reais. O programa
deve calcular e mostrar na tela qual o menor número possível de notas e moedas de 100,50,20,10,5,2 e
1 real em que o valor pode ser decomposto.
Exemplo: Se o usuário informar o valor de 279, o programa deverá mostrar que o menor número
de notas possíveis são 7 notas. Para desenvolver este programa, utilizar os operadores de divisão e o
resto da divisão*/
#include <stdio.h>

int main() {
    int valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, moedas1;

    // Solicita o valor ao usuário
    printf("Digite um valor inteiro em reais: ");
    scanf("%d", &valor);

    // Cálculo das notas e moedas
    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas20 = valor / 20;
    valor %= 20;

    notas10 = valor / 10;
    valor %= 10;

    notas5 = valor / 5;
    valor %= 5;

    notas2 = valor / 2;
    valor %= 2;

    moedas1 = valor; // O que sobra são moedas de 1 real

    // Exibe o resultado
    printf("\nMenor número de notas e moedas:\n");
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Moedas de 1: %d\n", moedas1);

    return 0;
}
