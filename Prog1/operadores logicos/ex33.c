/*33) Desenvolva um programa que solicite ao usuário dois horários no formato de 24 horas (faixa de
00:00 a 23:59), que representem respectivamente a hora e minuto inicial e final de um evento. O
programa deve permitir que o usuário informe o horário através de duas informações independentes:
hora e minuto. Após a digitação, o computador deverá calcular a duração do evento em horas e
minutos.
Exemplo: se o usuário digitar como horário inicial os valores 20 (horas), 30 (minutos) e 22
(horas) e 15 (minutos), o programa deve mostrar na tela 1 hora e 45 minutos. Para efetuar este cálculo,
é necessário:
• converter os dois horários em minutos e calcular a quantidade total de minutos: (22*60 + 15) –
(20*60 + 30) = 1335 – 1230 = 105 minutos
• transformar a quantidade total de minutos em horas e minutos, utilizando os operadores de
divisão que fornecem a parte inteira do quociente e o resto da divisão:*/

#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int duracaoHoras, duracaoMinutos, totalMinutosInicio, totalMinutosFim, duracaoTotalMinutos;

    // Solicita o horário inicial
    printf("Digite a hora inicial (00-23): ");
    scanf("%d", &horaInicial);
    printf("Digite o minuto inicial (00-59): ");
    scanf("%d", &minutoInicial);

    // Solicita o horário final
    printf("Digite a hora final (00-23): ");
    scanf("%d", &horaFinal);
    printf("Digite o minuto final (00-59): ");
    scanf("%d", &minutoFinal);

    // Converte tudo para minutos
    totalMinutosInicio = horaInicial * 60 + minutoInicial;
    totalMinutosFim = horaFinal * 60 + minutoFinal;

    // Calcula a duração total em minutos
    duracaoTotalMinutos = totalMinutosFim - totalMinutosInicio;
    duracaoHoras = duracaoTotalMinutos / 60;
    duracaoMinutos = duracaoTotalMinutos % 60;

    // Exibe o resultado
    printf("A duração do evento foi de %d hora(s) e %d minuto(s).\n", duracaoHoras, duracaoMinutos);

    return 0;
}
