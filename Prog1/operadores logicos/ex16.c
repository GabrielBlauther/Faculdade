/* 16) Semiperímetro é a medida da metade do perímetro de uma figura geométrica e normalmente é
representada pela letra S. O semiperímetro do triângulo de lados a, b, e c */

#include <stdio.h>

int main(){
  float valores [3];
  char *nomes[]={"valor a","valor b","valor c"};

  for (int i= 0; i < 3; i++) {
    printf("Digite o valor %s: ", nomes[i]);
    scanf("%f", &valores[i]);
  }

  printf("O semiperímetro do triângulo é: %.2f",(valor[0] + valor[1] + valor[2])/2);

  return(0);
}