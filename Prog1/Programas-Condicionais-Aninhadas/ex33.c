/* 33) Desenvolva um programa que solicite ao usuário informar um valor real correspondente ao valor por
hora que um trabalhador ganha e dois valores inteiros que correspondam a hora de entrada e a hora de
saída (valores inteiros, sem minutos) do trabalhador. O programa deve calcular e mostrar na tela o valor
que o trabalhador ganhou pelo turno. Considere que ele entra e sai no mesmo dia.
Exemplo: se o usuário informar que o trabalhador ganha R$ 20,00 a hora e que ele trabalhou
das 8hs às 14hs, então o programa deverá mostrar na tela o valor R$ 120,00 (R$ 20,00 X 6 horas).*/

#include<stdio.h>

int main(){
  float valor_hora;
  int hora_entrada, hora_saida,soma;

  printf("Digite o valor ganho por hora: ");
  scanf("%f",&valor_hora);

  printf("Digite a hora de entrada: ");
  scanf("%d",&hora_entrada);
  printf("Digite a hora de saida: ");
  scanf("%d",&hora_saida);

  soma = hora_saida - hora_entrada;

  printf("Salario total no dia:%.2f",soma*valor_hora);
  return(0);
}