#include <stdio.h>

int main() {
    int cod, votos;
    int senador_1 = 0, senador_2 = 0;           // códigos
    int senador_1_votos = 0, senador_2_votos = 0; // votos

    while (1) {
        printf("Digite o código do senador (0 para encerrar): ");
        scanf("%d", &cod);

        if (cod == 0) break; // encerra o loop

        printf("Digite a quantidade de votos: ");
        scanf("%d", &votos);

        if (votos > senador_1_votos) {
            // Atualiza o mais votado e empurra o antigo pro segundo lugar
            senador_2 = senador_1;
            senador_2_votos = senador_1_votos;

            senador_1 = cod;
            senador_1_votos = votos;
        } else if (votos > senador_2_votos) {
            senador_2 = cod;
            senador_2_votos = votos;
        }
    }

    printf("Os dois senadores mais votados foram:\n");
    printf("Senador %d com %d votos\n", senador_1, senador_1_votos);
    printf("Senador %d com %d votos\n", senador_2, senador_2_votos);

    return 0;
}
