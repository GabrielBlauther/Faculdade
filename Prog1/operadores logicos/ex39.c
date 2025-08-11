/*39) Desenvolva um programa que solicite ao usuário a data de nascimento de uma pessoa e a data
atual. O programa deve permitir que o usuário informe a data através de três informações
independentes: dia, mês e ano. Após a digitação, o computador deverá calcular e mostrar na tela a
quantidade de dias (aproximadamente) que esta pessoa já viveu. Considere, para facilitar, que todos os
meses possuem 30 dias e que os anos possuem 365 dias.
Exemplo: se o usuário digitar a data de nascimento 16 (dia), 3 (mês) e 2004 (ano) e a data atual
como 25 (dia), 9 (mês) e 2015 (ano), o programa deve mostrar na tela 4.204 dias. Para efetuar este
cálculo, é necessário:
• converter as datas em um valor único, ou seja, em dias:
2004 * 365 + 3 * 30 + 16 = 731.566 dias
2015 * 365 + 9 * 30 + 25 = 735.770 dias
• subtrair a data atual em dias da data de nascimento em dias: 735.770 – 731.566 = 4.204 dias. */

#include <stdio.h>

int main() {
    int dia_nasc, mes_nasc, ano_nasc;
    int dia_atual, mes_atual, ano_atual;
    int total_dias_nasc, total_dias_atual, dias_vividos;

    // Solicita a data de nascimento
    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &dia_nasc);
    printf("Digite o mês do seu nascimento: ");
    scanf("%d", &mes_nasc);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);

    // Solicita a data atual
    printf("Digite o dia atual: ");
    scanf("%d", &dia_atual);
    printf("Digite o mês atual: ");
    scanf("%d", &mes_atual);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Converte as datas para dias
    total_dias_nasc = (ano_nasc * 365) + (mes_nasc * 30) + dia_nasc;
    total_dias_atual = (ano_atual * 365) + (mes_atual * 30) + dia_atual;

    // Calcula os dias vividos
    dias_vividos = total_dias_atual - total_dias_nasc;

    printf("Você já viveu aproximadamente %d dias.\n", dias_vividos);

    return 0;
}
