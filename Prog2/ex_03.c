#include <stdio.h>

int main(void)
{
  int vetor[5], soma = 0;

  for(int i = 0; i < 5; i++)
  {
    printf("Digite o %d numero: ", i+1);
    scanf("%d", &vetor[i]);
    soma+=vetor[i];
  }
  printf("\nSoma dos valor do vetor: %d", soma);
}