/* 13) Desenvolva um programa que solicite ao usuário informar quatro valores reais que correspondam as
três provas e a nota dos exercícios realizados pelos alunos, e um número inteiro que corresponda ao
número de matrícula do aluno. O programa deverá calcular a média usando a fórmula
Média=
N1
+2∗N2
+2∗N3
+4∗Exercícios
10 . Após o cálculo, o programa deverá mostrar na tela as
notas do aluno, sua média e o conceito correspondente (ver abaixo) e a mensagem "Aprovado"
(conceito = A, B ou C) ou "Reprovado".
Média > = 9.0 >= 7.5 e < 9.0 >= 6.0 e < 7.5 >= 4.0 e < 6.0 < 4.0
Conceito A B C D E
Exemplo: se o usuário informar os valores 7.5, 6, 9.5 e 10 respectivamente como a primeira,
segunda, terceira notas e média dos exercícios de um aluno, o programa deverá calcular a média ( 7.5
+ 2*6 + 2* 9.5 + 4*10)/10 e mostrar o resultado final:
Notas do aluno: 7.5, 6, 9.5 e 10
Média: 7,85
Conceito: B*/

#include <stdio.h>

int main() {
    float n1, n2, n3, exercicios, media;
    int matricula;
    char conceito;

    printf("Digite o numero de matricula: ");
    scanf("%d", &matricula);
    printf("Digite as 3 notas e a nota dos exercicios (separados por espaco): ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &exercicios);

    // Cálculo correto da média conforme a fórmula dada
    media = (n1 + 2 * n2 + 2 * n3 + 4 * exercicios) / 10;

    // Determinação do conceito
    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibição dos resultados
    printf("\nNotas do aluno: %.1f, %.1f, %.1f e %.1f", n1, n2, n3, exercicios);
    printf("\nMedia: %.2f", media);
    printf("\nConceito: %c", conceito);

    // Verificação de aprovação
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("\nAprovado");
    } else {
        printf("\nReprovado");
    }

    return 0;
}