/*7) Desenvolva um programa em C que solicite ao usuário informar diversos valores inteiros até que o
valor zero seja informado. A cada número par digitado, o programa em C deverá mostrar a mensagem
“É um número par.”.
É importante ressaltar que neste programa em C, não existe um número definido de valores que
o usuário deve informar. O usuário pode informar quantos valores desejar. Para encerrar a digitação, o
usuário deve informar o valor 0 (zero). */

#include <stdio.h>

int main() {
    int valor;

    // Inicializa, depois verifica a condição
    for (
        printf("Digite um valor inteiro (0 para encerrar): "), scanf("%d", &valor);
        valor != 0;
        printf("Digite um valor inteiro (0 para encerrar): "), scanf("%d", &valor)
    ) {
        if (valor % 2 == 0)
            printf("É um número par.\n");
    }

    printf("Programa encerrado.\n");
    return 0;
}
