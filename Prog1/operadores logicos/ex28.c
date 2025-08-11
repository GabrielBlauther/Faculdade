/*) Desenvolva um programa que solicite ao usuário digitar um tempo em minutos. Após a digitação, o
computador deverá converter este tempo para horas e mostrar esta informação na tela do computador.
Exemplo: Se o usuário digitar 13.527 minutos, o programa deverá mostrar na tela 225 horas.*/

#include <stdio.h>

int main(){
  int minutos;

  printf("Digite o valor em horas: ");
  scanf("%d", &minutos);

  printf("O valor de %d em horas é: %d",horas, minutos/60);

  return(0);
}