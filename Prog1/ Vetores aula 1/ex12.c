/*12) Desenvolva um programa em C que solicite ao usuário informar 15 valores inteiros e armazene
estes valores em um vetor. O programa em C deverá calcular a média dos valores informados,
encontrar o menor número maior que a média e mostrar na tela estas informações.*/

#include <stdio.h>

int main(){
  int vetores[15],i,menor=100000,media=0,aux=0;

  printf("Digite 15 valores:\n");
  for(i=0;i<15;i++)
  scanf("%d",&vetores[i]);

 for(i=0;i<15;i++){
  media += vetores[i];
 }
 media /= 15;

 for(i=0;i<15;i++)
  if(vetores[i]>media)
    if(vetores[i] < menor)
    menor = vetores[i];

   printf("A média foi de %d e o menor valor acima da media foi %d",media , menor);
}