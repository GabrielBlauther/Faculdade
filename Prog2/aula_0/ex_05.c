#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, j;
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j< 3;j++)
    {
      printf("%d ", rand() % 10);
    }
    printf("\n");
  }
  return 0;
}