/*18) Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. O
programa em C deve verificar se o número possui algum dígito repetido, mostrando na tela uma
mensagem informando se o número contém ou não dígitos repetidos. */

#include <stdio.h>

int main() {
    int num, num_copia, d1, d2;
    int tem_repetido = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    // Garante que analisamos número positivo
    if (num < 0) {
        num = -num;
    }

    num_copia = num;

    // Pegamos um dígito por vez
    while (num_copia != 0) {
        d1 = num_copia % 10;
        int temp = num_copia / 10;

        // Compara com os dígitos à esquerda
        while (temp != 0) {
            d2 = temp % 10;
            if (d1 == d2) {
                tem_repetido = 1;
                break;
            }
            temp /= 10;
        }

        if (tem_repetido) {
            break;
        }

        num_copia /= 10;
    }

    if (tem_repetido) {
        printf("O número possui dígitos repetidos.\n");
    } else {
        printf("O número não possui dígitos repetidos.\n");
    }

    return 0;
}
