/*13) A área de um círculo é estimada pela fórmula área = πraio2
. Assumindo que o valor de π é
3.14159, faça um programa que leia um número real representando o raio de um círculo, calcule e
mostre a área do círculo.*/

#include <stdio.h>
#include <math.h>

int main(){
  float raio;

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  printf("A área do circulo eh: %.2f", pow(raio,2)*3.14159);

  return(0);
}