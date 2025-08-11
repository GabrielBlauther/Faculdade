/*34) Desenvolva um programa que solicite ao usuário um horário (hora,minuto,segundo) no formato de
24 horas (faixa de 00:00:00 a 23:59:59) e mostre na tela o horário correspondente ao segundo seguinte.
O programa deve permitir que o usuário informe o horário através de três informações independentes:
hora,minuto e segundo. O horário calculado deve ser mostrado na tela no formato de 24 horas.*/

#include <stdio.h>

int main() {
    int hora, minuto, segundo, totalSegundos;

    // Solicita o horário do usuário
    printf("Digite a hora (00-23): ");
    scanf("%d", &hora);
    printf("Digite o minuto (00-59): ");
    scanf("%d", &minuto);
    printf("Digite o segundo (00-59): ");
    scanf("%d", &segundo);

    // Converte tudo para segundos
    totalSegundos = (hora * 3600) + (minuto * 60) + segundo;

    // Adiciona 1 segundo
    totalSegundos++;

    // Converte de volta para horas, minutos e segundos
    hora = (totalSegundos / 3600) % 24; // % 24 para garantir que não passe de 23h
    minuto = (totalSegundos % 3600) / 60;
    segundo = totalSegundos % 60;

    // Exibe o horário formatado
    printf("O horário no segundo seguinte é: %02d horas %02d minutos e %02d segundos\n", hora, minuto, segundo);

    return 0;
}
