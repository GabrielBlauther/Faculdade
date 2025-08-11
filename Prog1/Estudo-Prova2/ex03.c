/*3) Desenvolva um programa que solicite ao usuário digitar três números inteiros. O programa deverá
mostrar na tela os números informados em ordem crescente.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na tela a
mensagem “Números em ordem crescente: 15, 34 e 43”.*/

#include <stdio.h>

int main() {
    int a, b, c, aux;

    printf("Digite três números inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    // Ordenação usando swaps (trocas)
    if (a > b) {  // Se a > b, troca os valores
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c) {  // Agora 'a' é o menor entre a e b, comparamos com 'c'
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c) {  // Por fim, ordena 'b' e 'c'
        aux = b;
        b = c;
        c = aux;
    }

    printf("Números em ordem crescente: %d, %d e %d\n", a, b, c);

    return 0;
}