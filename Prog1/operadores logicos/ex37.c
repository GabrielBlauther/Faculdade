/*37) Desenvolva um programa que solicite ao usuário a idade de uma pessoa em anos, meses e dias.
Após a digitação, o computador deverá calcular e mostrar na tela a idade da pessoa expressa em dias.
Considere para efeitos de cálculo todos os anos com 365 dias e todos os meses com 30 dias.
Exemplo: se o usuário digitar 16 (anos), 11 (meses) e 29 (dias), o programa deve mostrar na tela
6.199 dias (16 * 365 + 11 * 30 + 29). */

#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;

    // Solicita a idade em anos, meses e dias
    printf("Digite sua idade em anos: ");
    scanf("%d", &anos);
    printf("Digite os meses: ");
    scanf("%d", &meses);
    printf("Digite os dias: ");
    scanf("%d", &dias);

    // Calcula o total de dias considerando 1 ano = 365 dias e 1 mês = 30 dias
    total_dias = (anos * 365) + (meses * 30) + dias;

    // Exibe o total de dias
    printf("Sua idade em dias é: %d dias\n", total_dias);

    return 0;
}
