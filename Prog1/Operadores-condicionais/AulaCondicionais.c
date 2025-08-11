//Teste de condicionais if

#include <stdio.h>

int main(){
  int id;

  printf("Informe a idade da pessoa: ");
  scanf("%d", &id);

  if (id >= 18)
    printf("Eh maior de idade\n");

    else
      printf("Eh menor de idade");

    return(0);
}