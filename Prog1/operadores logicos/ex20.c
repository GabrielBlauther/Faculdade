/* 20) Fazer um programa que calcule a quantidade de latas de tinta (e o respectivo custo) que serão
necessárias para pintar externamente um tanque cilíndrico de combustível. Sabe-se que cada lata de 5
litros de tinta custa 40,00 e permite pintar nove metros quadrados (9m2
). O programa deverá ler a
altura(h) e o raio(r) do cilindro e escrever a quantidade de latas de tinta e o custo total considerando
duas mãos de tinta.*/

#include <stdio.h>

int main(){
  float altura, raio, area, qntd_latas,valor;

  printf("Digite o valor da Altura: ");
  scanf("%f", &altura);

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  area = 2*3.14*raio*(raio*altura);

  qntd_latas = area/9;
  valor = qntd_latas * 40.00;

  printf("Para pintar um tanque de %.2fm de altura e %.2fm de raio é necessario %.2f latas de tinta custando %.2f",altura ,raio ,qntd_latas, valor);

  return(0);

}