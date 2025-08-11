/*  32) As tarifas de um estacionamento são definidas assim: a primeira e a segunda hora custam 5 reais
cada. A terceira e a quarta hora custam 2 reais cada. A partir da quinta hora, cada hora custa 1 real
cada. Assim, se um carro ficar 5 horas no estacionamento, o motorista pagará 15 reais (5+5+2+2+1).
Desenvolva um programa que solicite o usuário informar dois valores inteiros que correspondam
respectivamente a hora de entrada e saída no estacionamento (horas inteiras, sem minutos). O
programa deverá calcular e mostrar na tela o valor a ser pago. Considere que o motorista entrará e
sairá do estacionamento no mesmo dia.*/

#include <stdio.h>

int main(){

  int hora_inicial,hora_final,soma,valor,total_pagar=0;

  printf("Digite a hora de entrada no estacionamento: ");
  scanf("%d",&hora_inicial);

  printf("Digite a hora de saida: ");
  scanf("%d",&hora_final);

  soma = hora_final - hora_inicial;

  if (soma >= 1) total_pagar += 5;
  if (soma >= 2) total_pagar += 5;
  if (soma >= 3) total_pagar += 2;
  if (soma >= 4) total_pagar += 2;
  if (soma >= 5) total_pagar += (soma - 4);
  printf("O valor a ser pago é R$%d\n", total_pagar);
}