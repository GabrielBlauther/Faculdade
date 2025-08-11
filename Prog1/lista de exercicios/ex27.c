/*27) Desenvolva um programa em C que solicite ao usuário informar 6 valores inteiros, correspondentes
a duas datas, cada uma formada por dia, mês e ano. O programa em C deverá calcular e mostrar na
tela o número de dias entre as duas datas, incluindo a data inicial e a data final. O programa em C deve
considerar os anos bissextos (a forma de cálculo está na lista de exercícios dos programa em Cs
condicionais).
Exemplo: se o usuário informar as datas 01/03/2016 e 07/05/2016, o programa em C deverá
mostrar 38 dias. Se se o usuário informar as datas 24/10/1998 e 13/07/2001, o programa em C deverá
mostrar 993 dias.*/
#include <stdio.h>

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
  if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    return 1;
  else
    return 0;
}

// Função para calcular o número de dias desde 01/01/0001 até a data informada
int totalDias(int dia, int mes, int ano) {
  int diasMeses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int i, total = 0;

  // Soma os dias dos anos anteriores
  for(i = 1; i < ano; i++) {
    if (ehBissexto(i))
      total += 366;
    else
      total += 365;
  }

  // Soma os dias dos meses anteriores ao informado no mesmo ano
  for(i = 1; i < mes; i++) {
    if (i == 2 && ehBissexto(ano))
      total += 29;
    else
      total += diasMeses[i - 1];
  }

  // Soma os dias do mês atual
  total += dia;

  return total;
}

int main() {
  int dia1, mes1, ano1, dia2, mes2, ano2;
  int total1, total2, diferenca;

  printf("Digite a primeira data (dia mes ano): ");
  scanf("%d %d %d", &dia1, &mes1, &ano1);

  printf("Digite a segunda data (dia mes ano): ");
  scanf("%d %d %d", &dia2, &mes2, &ano2);

  total1 = totalDias(dia1, mes1, ano1);
  total2 = totalDias(dia2, mes2, ano2);

  if (total1 > total2)
    diferenca = total1 - total2 + 1;
  else
    diferenca = total2 - total1 + 1;

  printf("A quantidade de dias entre as datas é: %d\n", diferenca);

  return 0;
}
