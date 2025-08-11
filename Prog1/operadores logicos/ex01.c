/*Desenvolva um programa que solicite ao usuário digitar dois valores inteiros. Após a digitação, o
computador deverá executar a soma destes números e mostrar o resultado na tela do computador.
Exemplo: se o usuário digitar os valores 7 e 15, o programa deve realizar a soma destes
números e mostrar na tela o resultado (22).*/

#include <stdio.h>

int main() {
  int numero1, numero2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &numero1); //lembrar do & que vai em todo scanf

  printf("Digite o outro valor: ");
  scanf("%d", &numero2);

  printf("A soma dos numeros eh: %d",numero1+numero2);

  return(0);
}
