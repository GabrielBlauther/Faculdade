#include <stdio.h>

int main(void)
{
  int vetor[10];

  for(int i = 0; i < 10; i++)
  {
    printf("Digite o %d número: \n", i+1);
    scanf("%d", &vetor[i]);
  }
  printf("Imprimindo dados via loop FOR\n");
  for(int i = 0; i < 10; i++)
  {
    printf("%dº numero: %d\n", i+1, vetor[i]);
  }

  printf("Imprimindo dados via loop WHILE\n");
  int cont = 0;
  while(cont < 10)
  {
    printf("%dº numero: %d\n", cont+1, vetor[cont]);
    cont++;
  }
}