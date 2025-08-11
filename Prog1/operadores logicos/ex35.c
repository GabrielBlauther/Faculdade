/*35) Desenvolva um programa que solicite ao usuário um horário (hora,minuto,segundo) no formato de
24 horas (faixa de 00:00:00 a 23:59:59) e uma quantidade de segundos transcorridos. O programa deve
permitir que o usuário informe o horário através de três informações independentes: hora,minuto e
segundo.
Após a digitação, o computador deverá calcular um segundo horário, que é a soma do primeiro
horário e dos segundos transcorridos. O horário calculado deve ser mostrado na tela no formato de 24
horas.
E*/


#include <stdio.h>

int main() {
    int hora, minuto, segundo, segundosExtra, totalSegundos;

    // Solicita o horário do usuário
    printf("Digite a hora (00-23): ");
    scanf("%d", &hora);
    printf("Digite o minuto (00-59): ");
    scanf("%d", &minuto);
    printf("Digite o segundo (00-59): ");
    scanf("%d", &segundo);

    // Solicita os segundos extras
    printf("Digite a quantidade de segundos a adicionar: ");
    scanf("%d", &segundosExtra);

    // Converte tudo para segundos
    totalSegundos = (hora * 3600) + (minuto * 60) + segundo;

    // Adiciona os segundos extras
    totalSegundos += segundosExtra;

    // Converte de volta para horas, minutos e segundos
    hora = (totalSegundos / 3600) % 24; // Garante que não passe de 23h
    minuto = (totalSegundos % 3600) / 60;
    segundo = totalSegundos % 60;

    // Exibe o horário formatado
    printf("O horário após a adição é: %02d horas %02d minutos e %02d segundos\n", hora, minuto, segundo);

    return 0;
}
