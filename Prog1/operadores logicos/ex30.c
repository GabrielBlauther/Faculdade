/*30) Desenvolva um programa que solicite ao usuário digitar um tempo em segundos. Após a digitação,
o computador deverá converter este tempo para horas e minutos e mostrar esta informação na tela do
computador.
Exemplo: Se o usuário digitar 15.987 segundos, o programa deverá mostrar na tela 4 horas e 26
minutos.*/

#include <stdio.h>

int main(){
  int horas,minutos,segundos,resto;

  printf("Digite o valor em segundos: ");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  resto = segundos % 3600;
  minutos = resto/60;

  printf("%d segundos é igual a %d horas e %d minutos", segundos, horas, minutos);

  return(0);
}