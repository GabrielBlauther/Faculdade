/*26) Desenvolva um programa que solicite ao usuário digitar um tempo em horas. Após a digitação, o
computador deverá converter este tempo para minutos e mostrar esta informação na tela do
computador.
Exemplo: se o usuário digitar como horário inicial 22 horas, o programa deverá multiplicar este
valor por 60 minutos e mostrar na tela o resultado: 1.320 minutos.*/

#include <stdio.h>

int main(){
  int horas;

  printf("Digite o valor em horas: ");
  scanf("%d", &horas);

  printf("O valor de %d em minutos é: %d",horas, horas*60);
  return(0);
}