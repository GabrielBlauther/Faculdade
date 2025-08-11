#include <stdio.h>

int main() {
  int tempo, horas;
  printf("Digite o tempo em segundos: ");
  scanf("%d", &tempo);

  horas = tempo / 3600;

  printf("O tempo em horas é: %d\n", horas);

  return(0);
}