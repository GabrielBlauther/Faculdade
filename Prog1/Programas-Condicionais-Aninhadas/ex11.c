/* 11) Desenvolva um programa que solicite ao usuário informar dois números inteiros de três dígitos cada
um. O programa deverá verificar se os dois números possuem os mesmos dígitos. Após a verificação, o
programa deverá mostrar na tela uma mensagem se os números possuem os mesmos dígitos.
 Exemplos: Se o usuário informar os números 469 e 694, o programa deve mostrar uma
mensagem que os dígitos dos dois números são os mesmos. Se o usuário informar os números 221 e
112, o programa deve mostrar uma mensagem que os dígitos dos dois números são diferentes. Neste
exemplo, de ambos terem somente os dígitos 1 e 2, o dígito 2 aparece duas vezes no primeiro número
e o dígito 1 aparece duas vezes no segundo número. */

#include <stdio.h>

int main() {
    int num1, num2;
    int d1, d2, d3; // Dígitos do primeiro número
    int d4, d5, d6; // Dígitos do segundo número
    int temp;

    printf("Digite dois numeros de tres digitos cada:\n");
    scanf("%d%d", &num1, &num2);

    // Extrai dígitos do primeiro número
    d1 = num1 / 100;
    temp = num1 % 100;
    d2 = temp / 10;
    d3 = temp % 10;

    // Extrai dígitos do segundo número
    d4 = num2 / 100;
    temp = num2 % 100;
    d5 = temp / 10;
    d6 = temp % 10;

    // Verifica se os dígitos são os mesmos (independente da ordem)
    // Conta quantas vezes cada dígito aparece em cada número
    int count1_1 = 0, count2_1 = 0, count3_1 = 0;
    int count1_2 = 0, count2_2 = 0, count3_2 = 0;

    // Conta dígitos do primeiro número
    if (d1 == d2 && d2 == d3) { // Todos iguais
        count1_1 = 3;
    } else if (d1 == d2 || d1 == d3 || d2 == d3) { // Dois iguais
        if (d1 == d2) {
            count1_1 = 2;
            count2_1 = 1;
        } else if (d1 == d3) {
            count1_1 = 2;
            count3_1 = 1;
        } else {
            count2_1 = 2;
            count3_1 = 1;
        }
    } else { // Todos diferentes
        count1_1 = 1;
        count2_1 = 1;
        count3_1 = 1;
    }

    // Conta dígitos do segundo número
    if (d4 == d5 && d5 == d6) { // Todos iguais
        count1_2 = 3;
    } else if (d4 == d5 || d4 == d6 || d5 == d6) { // Dois iguais
        if (d4 == d5) {
            count1_2 = 2;
            count2_2 = 1;
        } else if (d4 == d6) {
            count1_2 = 2;
            count3_2 = 1;
        } else {
            count2_2 = 2;
            count3_2 = 1;
        }
    } else { // Todos diferentes
        count1_2 = 1;
        count2_2 = 1;
        count3_2 = 1;
    }

    // Verifica se as contagens batem (mesmos dígitos com mesma frequência)
    if ((count1_1 == count1_2 && count2_1 == count2_2 && count3_1 == count3_2) ||
        (count1_1 == count1_2 && count2_1 == count3_2 && count3_1 == count2_2) ||
        (count1_1 == count2_2 && count2_1 == count1_2 && count3_1 == count3_2) ||
        (count1_1 == count2_2 && count2_1 == count3_2 && count3_1 == count1_2) ||
        (count1_1 == count3_2 && count2_1 == count1_2 && count3_1 == count2_2) ||
        (count1_1 == count3_2 && count2_1 == count2_2 && count3_1 == count1_2)) {
        printf("Os digitos dos dois numeros sao os mesmos.\n");
    } else {
        printf("Os digitos dos dois numeros sao diferentes.\n");
    }

    return 0;
}