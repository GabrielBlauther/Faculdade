/*10) Desenvolva um programa que solicite o usuário informar um número de 8 dígitos. O programa deve
verificar se este número é palíndromo, ou seja, se a leitura da direita para a esquerda é igual a leitura
da esquerda para a direita. Após a verificação, o programa deverá mostrar na tela uma mensagem se o
número é ou não palíndromo.
Exemplo: se o usuário informar o 25344351, o programa deverá verificar que o primeiro número
é igual ao oitavo, o segundo igual ao sétimo e o terceiro igual ao sexto número.
Dica para desenvolver este programa: divida o número por múltiplos de 10 e vá pegando o
quociente e resto da divisão para separar os 8 dígitos do número. */
#include <stdio.h>

int main() {
    int num, resto, d1, d2, d3, d4, d5, d6, d7, d8;

    printf("Digite um numero com 8 digitos: ");
    scanf("%d", &num);

    d1 = num / 10000000;
    resto = num % 10000000;

    d2 = resto / 1000000;
    resto = resto % 1000000;

    d3 = resto / 100000;
    resto = resto % 100000;

    d4 = resto / 10000;
    resto = resto % 10000;

    d5 = resto / 1000;
    resto = resto % 1000;

    d6 = resto / 100;
    resto = resto % 100;

    d7 = resto / 10;
    d8 = resto % 10;

    // Verifica palíndromo
    if(d1 == d8 && d2 == d7 && d3 == d6 && d4 == d5) {
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}