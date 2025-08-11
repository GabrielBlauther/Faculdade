/*27) Desenvolva um programa que solicite ao usuário digitar um tempo em horas. Após a digitação, o
computador deverá converter este tempo para segundos e mostrar esta informação na tela do
computador.
Exemplo: se o usuário digitar como horário inicial 22 horas, o programa deverá multiplicar este
valor por 3.600 segundos e mostrar na tela o resultado: 79.200 segundos.*/

#include <stdio.h>

int main(){
  int horas;

  printf("Digite o valor em horas: ");
  scanf("%d", &horas);

  printf("O valor de %d em minutos é: %d",horas, horas*3600);
  return(0);
}