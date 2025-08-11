/*18) Desenvolva um programa que solicite ao usuário informar três valores inteiros. Após verifique se os
três valores podem ser os comprimentos dos lados de um triângulo. Para os três valores serem os lados
do triângulo é necessário que o comprimento de cada lado do triângulo seja menor do que a soma dos
comprimentos dos outros dois lados (lado1< lado2 + lado3 e lado2 <lado1 + lado3 e lado3 <lado1 +
lado2). Se os três valores formarem um triângulo, verificar o tipo do triângulo (equilátero, isósceles ou
escaleno):
• equilátero : tem os comprimentos dos três lados iguais;
• isósceles : tem os comprimentos de dois lados iguais;
• escaleno : tem os comprimentos dos três lados diferentes.
Como resultado do processamento, o programa deverá mostrar na tela uma mensagem, deverá
ser mostrada uma das quatro mensagens abaixo:
• Os três lados não formam um triângulo.
• Os três lados formam um triângulo equilátero.
• Os três lados formam um triângulo isósceles.
• Os três lados formam um triângulo escaleno.
Exemplos:
Números informados pelo usuário Mensagens mostradas na tela
1º Exemplo 9 1 7 Os três lados não formam um triângulo.
2º Exemplo 6 6 6 Os três lados formam um triângulo equilátero.
3º Exemplo 6 6 7 Os três lados formam um triângulo isósceles.
4º Exemplo 6 7 8 Os três lados formam um triângulo escaleno*/

#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    // Entrada de dados
    printf("Digite os três lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    // Verifica se os valores formam um triângulo
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        // Identifica o tipo do triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Os três lados formam um triângulo equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Os três lados formam um triângulo isósceles.\n");
        } else {
            printf("Os três lados formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os três lados não formam um triângulo.\n");
    }

    return 0;
}
