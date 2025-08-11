#include <stdio.h>

int main() {
    int codigo1, codigo2, codigo3, codigo4, codigo5;
    int votos1, votos2, votos3, votos4, votos5;
    int totalVotos;
    float percentual1, percentual2, percentual3, percentual4, percentual5;

    // Solicita os dados dos candidatos
    printf("Digite o codigo e a quantidade de votos de 5 candidatos:\n");
    printf("Candidato 1 (codigo e votos): ");
    scanf("%d %d", &codigo1, &votos1);
    printf("Candidato 2 (codigo e votos): ");
    scanf("%d %d", &codigo2, &votos2);
    printf("Candidato 3 (codigo e votos): ");
    scanf("%d %d", &codigo3, &votos3);
    printf("Candidato 4 (codigo e votos): ");
    scanf("%d %d", &codigo4, &votos4);
    printf("Candidato 5 (codigo e votos): ");
    scanf("%d %d", &codigo5, &votos5);

    // Calcula o total de votos
    totalVotos = votos1 + votos2 + votos3 + votos4 + votos5;

    // Calcula os percentuais de votos
    percentual1 = (float)votos1 / totalVotos * 100;
    percentual2 = (float)votos2 / totalVotos * 100;
    percentual3 = (float)votos3 / totalVotos * 100;
    percentual4 = (float)votos4 / totalVotos * 100;
    percentual5 = (float)votos5 / totalVotos * 100;

    // Mostra os resultados dos candidatos
    printf("\nResultados da eleição:\n");
    printf("Candidato %d: %d votos (%.2f%%)\n", codigo1, votos1, percentual1);
    printf("Candidato %d: %d votos (%.2f%%)\n", codigo2, votos2, percentual2);
    printf("Candidato %d: %d votos (%.2f%%)\n", codigo3, votos3, percentual3);
    printf("Candidato %d: %d votos (%.2f%%)\n", codigo4, votos4, percentual4);
    printf("Candidato %d: %d votos (%.2f%%)\n", codigo5, votos5, percentual5);

    // Verifica se alguém obteve mais de 50% dos votos válidos
    if (votos1 > totalVotos / 2) {
        printf("\nGanhador da eleição em 1º turno: Candidato %d\n", codigo1);
    } else if (votos2 > totalVotos / 2) {
        printf("\nGanhador da eleição em 1º turno: Candidato %d\n", codigo2);
    } else if (votos3 > totalVotos / 2) {
        printf("\nGanhador da eleição em 1º turno: Candidato %d\n", codigo3);
    } else if (votos4 > totalVotos / 2) {
        printf("\nGanhador da eleição em 1º turno: Candidato %d\n", codigo4);
    } else if (votos5 > totalVotos / 2) {
        printf("\nGanhador da eleição em 1º turno: Candidato %d\n", codigo5);
    } else {
        printf("\nEleição vai para segundo turno.\n");

        // Encontrar os dois candidatos com mais votos para o segundo turno
        int max1, max2;
        int candidato1, candidato2;

        if (votos1 > votos2 && votos1 > votos3 && votos1 > votos4 && votos1 > votos5) {
            max1 = votos1;
            candidato1 = codigo1;
            if (votos2 > votos3 && votos2 > votos4 && votos2 > votos5) {
                max2 = votos2;
                candidato2 = codigo2;
            } else if (votos3 > votos4 && votos3 > votos5) {
                max2 = votos3;
                candidato2 = codigo3;
            } else if (votos4 > votos5) {
                max2 = votos4;
                candidato2 = codigo4;
            } else {
                max2 = votos5;
                candidato2 = codigo5;
            }
        } else if (votos2 > votos3 && votos2 > votos4 && votos2 > votos5) {
            max1 = votos2;
            candidato1 = codigo2;
            if (votos1 > votos3 && votos1 > votos4 && votos1 > votos5) {
                max2 = votos1;
                candidato2 = codigo1;
            } else if (votos3 > votos4 && votos3 > votos5) {
                max2 = votos3;
                candidato2 = codigo3;
            } else if (votos4 > votos5) {
                max2 = votos4;
                candidato2 = codigo4;
            } else {
                max2 = votos5;
                candidato2 = codigo5;
            }
        } else if (votos3 > votos4 && votos3 > votos5) {
            max1 = votos3;
            candidato1 = codigo3;
            if (votos1 > votos2 && votos1 > votos4 && votos1 > votos5) {
                max2 = votos1;
                candidato2 = codigo1;
            } else if (votos2 > votos4 && votos2 > votos5) {
                max2 = votos2;
                candidato2 = codigo2;
            } else if (votos4 > votos5) {
                max2 = votos4;
                candidato2 = codigo4;
            } else {
                max2 = votos5;
                candidato2 = codigo5;
            }
        } else if (votos4 > votos5) {
            max1 = votos4;
            candidato1 = codigo4;
            if (votos1 > votos2 && votos1 > votos3 && votos1 > votos5) {
                max2 = votos1;
                candidato2 = codigo1;
            } else if (votos2 > votos3 && votos2 > votos5) {
                max2 = votos2;
                candidato2 = codigo2;
            } else {
                max2 = votos3;
                candidato2 = codigo3;
            }
        } else {
            max1 = votos5;
            candidato1 = codigo5;
            if (votos1 > votos2 && votos1 > votos3 && votos1 > votos4) {
                max2 = votos1;
                candidato2 = codigo1;
            } else if (votos2 > votos3 && votos2 > votos4) {
                max2 = votos2;
                candidato2 = codigo2;
            } else {
                max2 = votos3;
                candidato2 = codigo3;
            }
        }

        // Mostra os candidatos do segundo turno
        printf("Candidatos no segundo turno:\n");
        printf("Candidato %d: %d votos (%.2f%%)\n", candidato1, max1, (float)max1 / totalVotos * 100);
        printf("Candidato %d: %d votos (%.2f%%)\n", candidato2, max2, (float)max2 / totalVotos * 100);
    }

    return 0;
}
