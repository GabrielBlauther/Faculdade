/*16) Desenvolva um programa que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa deverá ler também um outro valor inteiro N e verificar se este valor N
é um elemento do vetor. O programa deverá mostrar na tela uma mensagem informando qual posição
do vetor esse elemento se encontra. Se o valor estiver em mais de uma posição do vetor, deve mostrar
todas as posições que este elemento se encontra.*/

#include <stdio.h>

int main() {
  int vetor[10], i, n;
  int posicoes[10];  // Vetor para armazenar posições
  int cont = 0;       // Contador de quantas vezes encontrou

  printf("Digite 10 valores:\n");
  for(i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Digite um valor para procurar: ");
  scanf("%d", &n);

  // Procurar o valor no vetor e armazenar as posições
  for(i = 0; i < 10; i++) {
    if(vetor[i] == n) {
      posicoes[cont] = i;
      cont++;
    }
  }

  // Mostrar o resultado
  if(cont > 0) {
    printf("O valor %d foi encontrado nas posições: ", n);
    for(i = 0; i < cont; i++) {
      printf("%d ", posicoes[i]);
    }
    printf("\n");
  } else {
    printf("O valor %d NÃO foi encontrado no vetor.\n", n);
  }

  return 0;
}
