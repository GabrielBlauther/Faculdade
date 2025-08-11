/*8) Desenvolva um programa em C que solicite ao usuário informar diversos valores inteiros até que um
número negativo seja informado. A cada número par digitado, o programa em C deverá mostrar a
mensagem “É um número par.”.
É importante ressaltar que neste programa em C, não existe um número definido de valores que
o usuário deve informar. O usuário pode informar quantos valores desejar. Para encerrar a digitação, o
usuário deve informar um número negativo. Ao verificar que o número é negativo, o programa em C não
deve realizar o teste para verificar se o número é par*/

#include <stdio.h>

int main() {
    int valor;

    // Lê o primeiro valor
    printf("Digite um valor inteiro (negativo para encerrar): ");
    scanf("%d", &valor);

    for (; valor >= 0; ) {
        if (valor % 2 == 0)
            printf("É um número par.\n");

        printf("Digite um valor inteiro (negativo para encerrar): ");
        scanf("%d", &valor);
    }

    printf("Programa encerrado.\n");
    return 0;
}
