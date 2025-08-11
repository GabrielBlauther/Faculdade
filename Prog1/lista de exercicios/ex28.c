/*28) Desenvolva um programa em C que que solicite ao usuário informar 3 valores inteiros,
correspondentes ao dia e mês de uma data e o dia da semana que esta data ocorre. O dia da semana
informado deverá ser um número que pertença ao intervalo 1 a 7, onde 1-domingo, 2-segunda, 3-terça,
4-quarta, 5-quinta, 6-sexta, 7-sábado.
O programa em C deverá encontrar e mostrar na tela o nome do dia da semana correspondente
ao primeiro dia do mês digitado.*/

#include <stdio.h>

int main() {
  int dia, mes, diaSemana, diaSemana1;

  printf("Digite o dia: ");
  scanf("%d", &dia);

  printf("Digite o mês: ");
  scanf("%d", &mes);

  printf("Digite o dia da semana correspondente a esta data (1=domingo até 7=sábado): ");
  scanf("%d", &diaSemana);

  // Calcula o dia da semana correspondente ao dia 1
  diaSemana1 = diaSemana - ((dia - 1) % 7);

  // Ajusta se o resultado for menor ou igual a 0
  if(diaSemana1 <= 0) {
    diaSemana1 += 7;
  }

  // Mostra o nome do dia da semana
  printf("O dia 1 do mês %d caiu em: ", mes);

  if(diaSemana1 == 1)
    printf("domingo\n");
  else if(diaSemana1 == 2)
    printf("segunda-feira\n");
  else if(diaSemana1 == 3)
    printf("terça-feira\n");
  else if(diaSemana1 == 4)
    printf("quarta-feira\n");
  else if(diaSemana1 == 5)
    printf("quinta-feira\n");
  else if(diaSemana1 == 6)
    printf("sexta-feira\n");
  else if(diaSemana1 == 7)
    printf("sábado\n");

  return 0;
}
