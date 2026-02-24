#include <stdio.h>

int main(void)
{
  int cont_neg = 0,cont_pos = 0, vetor[5], positivos[5], negativos[5];
  float media , soma = 0;

  for(int i = 0; i < 5; i++)
  {
    printf("Digite o %dº valor: \n", i+1);
    scanf("%d",&vetor[i]);

    if(vetor[i] < 0)
    {
      negativos[cont_neg] = vetor [i];
      cont_neg++;
    }
    else
    {
      positivos[cont_pos] = vetor[i];
      cont_pos++;
    }
    soma+= vetor[i];
  }

  if(cont_pos > 0){
    printf("Números positivos: \n");
    for(int i = 0; i < cont_pos; i++)
    {
      printf("%d ", positivos[i]);
    }
  }

  if(cont_neg > 0){
    printf("\nNúmeros negativos: \n");

    for(int i = 0; i < cont_neg; i++)
    {
      printf("%d", negativos[i]);
    }
  }
  printf("\n Média dos valores: %.2f", media = soma / 5);

  return 0;
}