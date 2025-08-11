/*7) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá contar a quantidade de valores negativos. Após o
programa em C deverá mostrar na tela o vetor digitado e a quantidade de valores negativos. */

#include <stdio.h>

int main(){
  int vetor[10],i,cont=0;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++){
    scanf("%d", &vetor[i]);
  }
  for(i=0;i<10;i++)
    if(vetor[i] < 0)
      cont++;
  printf("A quantidade de numeros negativos foram de: %d numeros",cont);
  printf("\nOs vetores negativos foram: ");
  for(i=0;i < 10;i++){
    if(vetor[i] < 0);
    printf(" %d",vetor[i]);

  }
}