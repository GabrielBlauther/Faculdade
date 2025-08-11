/* 9) Desenvolva um programa que solicite ao usuário informar três valores inteiros, respectivamente o
primeiro termo de uma progressão aritmética (PA), o último termo da progressão e a razão desta
progressão. O computador deverá calcular e mostrar na tela a soma dos termos da PA.
Para calcularmos a soma dos termos da PA, podemos utilizar a fórmula:
Soma dos termos P.A =
Porém precisaremos antes de aplicarmos esta fórmula, teremos de descobrir o número de
termos da PA, pois esta informação não foi digitada pelo usuário. Para descobrirmos o número de
termos, podermos utilizar a fórmula:
Número de termos =
Exemplo: se o usuário informar os valores 7 (primeiro termo), 31 (último termo) e 4 (razão), o
programa deverá:
 calcular o número de termos: (31-7)/4 = 6
 calcular a soma dos termos: (7+31)/2*6= 114
 mostrar na tela o resultado final, ou seja, 114.*/

#include <stdio.h>

int main(){
  int primeiro_termo, ultimo_termo, razao,termos;

  printf("Digite o valor do primeiro termo: ");
  scanf("%d", &primeiro_termo);

  printf("Digite o valor do ultimo termo: ");
  scanf("%d", &ultimo_termo);

  printf("Digite o valor da razão: ");
  scanf("%d", &razao);

  termos = (ultimo_termo - primeiro_termo)/4;

  printf("A soma dos termos da PA eh: %d",(primeiro_termo + ultimo_termo)/2*termos);

  return(0);
}