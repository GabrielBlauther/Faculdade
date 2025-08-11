/*17) Desenvolva um programa que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. Após ler e armazenar os dados no vetor, o programa deverá ler também mais dez
(10) valores inteiros e verificar se cada um dos valores informados individualmente estão contidos no
vetor. O programa deverá mostrar na tela, para cada um dos 10 valores informados, uma mensagem
informando se o valor N é ou não um elemento do vetor.
Exemplo: Supondo que o usuário informe os seguintes valores para o vetor:
V[0]= 2 V[2]= 87 V[4]= 43 V[6]= 23 V[8]= 121
V[1]= 76 V[3]= 10 V[5]= 54 V[7]= 88 V[9]= 231
Após ele terá que Se o usuário digitar o valor 23, o programa deverá mostrar na tela uma
mensagem indicando que este valor está contido no vetor. Se o usuário digitar o valor 50, o programa
deverá mostrar na tela uma mensagem indicando que este valor não está contido no vetor.*/
#include <stdio.h>

int main() {
  int vetor[10], numeros[10];
  int i, j, encontrado;

  // Ler os 10 valores iniciais
  printf("Digite os 10 valores do primeiro vetor:\n");
  for(i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }

  // Ler os outros 10 números e verificar
  printf("Digite mais 10 números para verificar se estão contidos no vetor:\n");
  for(j = 0; j < 10; j++) {
    scanf("%d", &numeros[j]);

    // Verifica se numeros[j] está em vetor[]
    encontrado = 0; // resetar para cada número
    for(i = 0; i < 10; i++) {
      if(numeros[j] == vetor[i]) {
        encontrado = 1;
        break;
      }
    }

    // Exibe o resultado
    if(encontrado) {
      printf("O número %d está contido no vetor.\n", numeros[j]);
    } else {
      printf("O número %d NÃO está contido no vetor.\n", numeros[j]);
    }
  }

  return 0;
}
