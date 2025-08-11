/*8) (00007000) Na ordenação por contagem, conta-se, para cada elemento do vetor, o número de
elementos menores ou iguais a ele. O valor da contagem é a posição que o elemento ocupará no vetor
ordenado.
Desenvolva um programa em C que leia um vetor V[20] e ordene-o em ordem crescente, escrevendo o
vetor ordenado. Considere que não há repetição de valores no vetor.*/

#include <stdio.h>

int main(){

  int vetor[20],i,j,cont,vetor_ordenado[20];

  for(i=0;i<20;i++){
    printf("Digite o %dº numero: ",i+1);
    scanf("%d",&vetor[i]);
  }

  for(i=0;i<20;i++){
    cont=0;
    for(j=0;j<20;j++){
      if(vetor[i]<=vetor[j])
        cont++;
    }
    vetor_ordenado[cont -1] = vetor[i];
  }
 for(i=0;i<20;i++){
    printf(" %d ",vetor_ordenado[i]);
}
}