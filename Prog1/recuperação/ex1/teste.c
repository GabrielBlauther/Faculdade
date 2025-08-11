#include <stdio.h>

main(){
  int i, aux, anterior, vetor[10]

  for(i=0;i<10;i++){
    scanf("%d" &vetor[i]);
  }

  anterior = vetor[0];
  for(i=0;i<10;i++){
    aux = vetor[9-i];
    vetor[9-i] = anterior;
    anterior = aux;
  }

  for(i=0;i<10;i++){
    printf("%d ", )
  }
}