#include <stdio.h>

int main(void)
{
  int idade;
  float altura, peso, IMC;
  char nome;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a seu peso: ");
  scanf("%f", &peso);
  printf("Digite a sua altura: ");
  scanf("%f", &altura);
  printf("Digite a primeira letra do seu nome: ");
  scanf(" %c", &nome);

  IMC = peso / (altura * altura);

  printf("Idade: %d\n", idade);
  printf("Altura: %2.f\n", altura);
  printf("Peso: %.2f\n", peso);
  printf("Inicial do nome: %c\n", nome);
  printf("IMC: %.2f\n", IMC);

}