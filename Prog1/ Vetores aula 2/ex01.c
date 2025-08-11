#include <stdio.h>

int main() {
    int numeros[10], jaContou[10], i, j, cont;

    // Entrada de dados
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        jaContou[i] = 0; // ainda não contamos
    }

    // Contagem
    for (i = 0; i < 10; i++) {
        if (jaContou[i] == 0) {
            cont = 1;
            jaContou[i] = 1;

            for (j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    cont++;
                    jaContou[j] = 1;
                }
            }

            printf("O número %d apareceu %d vezes.\n", numeros[i], cont);
        }
    }

    return 0;
}
