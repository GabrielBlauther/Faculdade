/*
Leia 8 números e mostre o maior deles.
*/

#include <stdio.h>

int main(void)
{
  int maior = 0, vetor[8];

  for(int i = 0; i < 8; i++ )
  {
    printf("Digite o %i numero: ", i);
    scanf("%d", &vetor[i]);
    if(vetor[i] > maior)
    {
      maior = vetor[i];
    }
  }
  printf("Maior valor: %d\n", maior);

  return 0;
}