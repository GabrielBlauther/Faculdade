#include <stdio.h>

int main() {
    int matricula, conceito;
    float n1, n2, n3, n_rec, media;

    // Entrada de dados
    printf("Digite o numero da matricula: ");
    scanf("%d", &matricula);
    printf("Digite as 3 notas da prova:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    // Se alguma nota for zero, a média já é zero
    if (n1 == 0 || n2 == 0 || n3 == 0) {
        media = 0.0;
        conceito = 0;
    } else {
        // Cálculo da média harmônica
        media = 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));

        // Verifica se o aluno pode alcançar média 6.0 na recuperação
        float media_teste = 3.0 / ((1.0 / 10.0) + (1.0 / n2) + (1.0 / n3));

        if (media < 6.0 && media_teste >= 6.0) {
            printf("Digite a nota da prova de recuperação: ");
            scanf("%f", &n_rec);

            // Encontrar a menor nota e substituí-la
            if (n1 <= n2 && n1 <= n3) {
                n1 = n_rec;
            } else if (n2 <= n1 && n2 <= n3) {
                n2 = n_rec;
            } else {
                n3 = n_rec;
            }

            // Recalcula a média harmônica
            media = 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
        }

        // Atribuir conceito baseado na média final
        if (media >= 9.0) {
            conceito = 4;
        } else if (media >= 8.0) {
            conceito = 3;
        } else if (media >= 7.0) {
            conceito = 2;
        } else if (media >= 6.0) {
            conceito = 1;
        } else {
            conceito = 0;
        }
    }

    // Saída de dados
    printf("Matricula: %d\nMédia Final: %.2f\nConceito: %d\n", matricula, media, conceito);

    return 0;
}
