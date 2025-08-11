/*15) Faça um programa que leia 3 valores reais que representam os comprimentos dos lados paralelos e
a altura de um trapézio, calcule e escreva a área do trapézio. Dica: a área de um trapézio é dada pela
expressão:
Área = (
a+b
2 )
⋅c*/

#include <stdio.h>

int main() {
    float valores[3]; // Array para armazenar os valores (base maior, base menor e altura)
    char *nomes[] = {"Base maior", "Base menor", "Altura"};

    // Coletando os dados com um loop for
    for (int i = 0; i < 3; i++) {// Em um loop for, i++ é usado para aumentar i a cada repetição.
        printf("Digite o valor da %s: ", nomes[i]);
        scanf("%f", &valores[i]);
    }

    // Calculando a área do trapézio
    float area = ((valores[0] + valores[1]) * valores[2]) / 2;

    // Exibindo o resultado
    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
