/*35) Desenvolva um programa em C que calcule e mostre na tela a soma dos 100 primeiros termos da
sequência 1
1
+
1
3
+
1
5
+
1
7
+
1
9
+.....*/

#include <stdio.h>

int main(){

  int i,den=1;
  float soma=1;

  printf("A serie eh:\n1/1");
  for(i=2;i<=100;i++){
    den+=2;
    printf(" + 1/%d",den);
    soma+=(float)1/den;
  }
  printf("\n a soma dos termos eh %.2f",soma);
}