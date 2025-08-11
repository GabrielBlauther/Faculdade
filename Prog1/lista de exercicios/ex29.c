/*29) Desenvolva um programa em C que que solicite ao usuário informar 4 valores inteiros,
correspondentes ao dia, mês e ano de uma data e o dia da semana que esta data ocorre. O dia da
semana informado deverá ser um número que pertença ao intervalo 1 a 7, onde 1-domingo, 2-segunda,
3-terça, 4-quarta, 5-quinta, 6-sexta, 7-sábado.
O programa em C deverá calcular e mostrar na tela as datas das próximas 3 sextas-feiras 13, a
partir da data digitada, incluindo a própria data, se esta for uma sexta-feira 13. O programa em C deve
considerar os anos bissextos (a forma de cálculo está na lista de exercícios dos programa em Cs
condicionais).*/

#include <stdio.h>

int ehBissexto(int ano) {
  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    return 1;
  else
    return 0;
}

int diasNoMes(int mes, int ano) {
  if (mes == 2)
    return ehBissexto(ano) ? 29 : 28;
  else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    return 30;
  else
    return 31;
}

int main() {
  int dia, mes, ano, diaSemana, contador = 0;
  int d, m, a, ds; // variáveis de avanço

  printf("Digite o dia: ");
  scanf("%d", &dia);
  printf("Digite o mês: ");
  scanf("%d", &mes);
  printf("Digite o ano: ");
  scanf("%d", &ano);
  printf("Digite o dia da semana (1=Dom, ..., 7=Sab): ");
  scanf("%d", &diaSemana);

  d = dia;
  m = mes;
  a = ano;
  ds = diaSemana;

  printf("Próximas sextas-feiras 13:\n");

  while (contador < 3) {
    if (d == 13 && ds == 6) {
      printf("%02d/%02d/%04d\n", d, m, a);
      contador++;
    }

    // Avança para o próximo dia
    d++;
    ds++;
    if (ds > 7)
      ds = 1;

    if (d > diasNoMes(m, a)) {
      d = 1;
      m++;
      if (m > 12) {
        m = 1;
        a++;
      }
    }
  }

  return 0;
}
