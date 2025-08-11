/*  31) Desenvolva um programa que leia quatro valores inteiros que correspondam a hora e minuto iniciais
de um evento. O programa deverá calcular e mostrar na tela a duração do evento em horas e minutos.
Considere que o evento pode iniciar em um dia e terminar no dia seguinte.
Exemplo: se o usuário informar que o evento iniciou às 23horas e 0 minutos e encerrou às
2horas e 45 minutos, o programa deverá mostrar na tela que o tempo de duração do evento foi de 3
horas e 45 minutos.*/

#include <stdio.h>

int main(){
  int min_entrada,hora_entrada;
  int min_saida, hora_saida;
  int soma;

  printf("Digite a hora e minuto de entrada:\n");
  scanf("%d%d",&hora_entrada,&min_entrada);
  printf("Digite hora e minuto de saida:\n");
  scanf("%d%d",&hora_saida,&min_saida);

  soma = (hora_saida*60+min_saida) - (hora_entrada*60 + min_entrada);

  printf("A duração no evento foi de %dhoras e %dminutos",soma/60,soma%60);
  return(0);
}