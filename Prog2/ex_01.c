#include <stdio.h>

int main(void)
{
  int num;

  printf("Digite um numero: ");
  scanf("%d",&num);

  if(num % 2 == 0)
  {
    printf("Numero %d é par.\n", num);
  }
  else
  {
    printf("Numero %d é impar.\n", num);
  }

  return 0;
}