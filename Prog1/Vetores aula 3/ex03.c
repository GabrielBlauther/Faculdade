/* 3) Desenvolva um programa em C que solicite ao usuário informar 20 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá trocar cada elemento que estiver em posição ímpar
pelo elemento da posição par imediatamente a seguir. O programa em C deverá mostrar os elementos
do vetor na tela, antes e depois da troca dos elementos.
Exemplo para um vetor de 10 elementos: se o usuário informar os valores:
V[0]= 2 V[2]= 87 V[4]= 43 V[6]= 23 V[8]= 121
V[1]= 76 V[3]= 10 V[5]= 54 V[7]= 88 V[9]= 231
O programa em C deverá:
• mostrar na tela os elementos do vetor: 2 76 87 10 43 54 23 88 121 231
• trocar os elementos de posição:
V[0]= 76 V[2]= 10 V[4]= 54 V[6]= 88 V[8]= 231
V[1]= 2 V[3]= 87 V[5]= 43 V[7]= 23 V[9]= 121
• mostrar na tela os elementos do vetor depois da troca: 76 2 10 87 54 43 88 23 231 121 */

#include <stdio.h>

int main(){
  int vetor[20],aux,i;

  printf("Digite 20 valores:\n");
  for(i=0;i<20;i++)
    scanf("%d",&vetor[i]);

  printf("Vetores antes de serem modificados:\n");
  for(i=0;i<20;i++)
    printf("%d - ",vetor[i]);


  printf("\nVetores modificados:\n");
  for(i=0;i<20;i+=2){
    aux=vetor[i];
    vetor[i]= vetor [i+1];
    vetor[i+1]=aux;
  }
  for(i=0;i<20;i++)
    printf("%d - ",vetor[i]);


}
