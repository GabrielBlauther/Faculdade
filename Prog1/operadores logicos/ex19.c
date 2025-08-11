/*19) Fazer um programa que leia as coordenadas dos vértices de um triângulo no plano cartesiano e
após calcule e escreva o comprimento dos 3 lados deste triângulo. A distância entre dois pontos,
representados por coordenadas cartesianas (x1,y1) e (x2,y2), pode ser calculada através da expressão:
Distância=√( x2−x1)
2
+( y2−y1)
2
.*/

#include <stdio.h>
#include <math.h>

int main(){
  double valor[3];
  char *coordenadas[] = {"x1","y1","x2","y2"};

  for(int i= 0; i<4; i++) {
    printf("Digite o  %s: ", coordenadas[i]);
    scanf("%lf", &valor[i]);
  }

  printf("O comprimento dos 3 lados do triângulo é: %.2lf", sqrt((pow(coordenadas[2] - coordenadas[0],2)+(pow(coordenadas[3]-coordenadas[1],2)))));

  return(0);
}