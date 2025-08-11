/*15) Um número piramidal é um número que é igual à soma de 3 números primos consecutivos. Por
exemplo, o número 15 é piramidal pois 15 = 3 + 5 + 7 . O número 10 também é piramidal pois 10 =2 +
3+ 5 . O número 23 é piramidal pois 23 = 5 + 7 + 11
Desenvolva um programa em C que leia um valor inteiro. O programa em C deve gerar e
mostrar na tela os 10 primeiros números piramidais maiores ou iguais ao valor informado pelo usuário.*/

#include <stdio.h>

int main() {
    int valor, i, j, cont = 0;
    int num, soma, primos[1000], qtd_primos = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Gera muitos números primos e armazena em um vetor
    for (num = 2; qtd_primos < 500; num++) {
        int eh_primo = 1; // considera que é primo

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo == 1) {
            primos[qtd_primos] = num;
            qtd_primos++;
        }
    }

    printf("Os 10 primeiros números piramidais maiores ou iguais a %d são:\n", valor);

    for (i = 0; i < qtd_primos - 2; i++) {
        soma = primos[i] + primos[i + 1] + primos[i + 2];

        if (soma >= valor) {
            printf("%d = %d + %d + %d\n", soma, primos[i], primos[i + 1], primos[i + 2]);
            cont++;
        }

        if (cont == 10) {
            break;
        }
    }

    return 0;
}
