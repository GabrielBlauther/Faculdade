/*5) Desenvolva um programa em C que solicite ao usuário informar 15 valores reais e armazene estes
valores em um vetor. Após solicite ao usuário informar um valor inteiro que corresponda a quantidade
de vezes que será aplicada uma rotação circular para a esquerda (rotate left) nos elementos do vetor.
Na rotação circular para a esquerda, cada elemento é copiado para a posição à esquerda, e o primeiro
elemento é copiado para a última posição. Após a troca dos elementos, mostrar na tela o vetor
modificado.*/

#include <stdio.h>

int main(){

  int vetor[15],i,aux,rotacoes,j;

  printf("Digite 15 valores:\n");
  for(i=0;i<15;i++)
    scanf("%d",&vetor[i]);

  printf("Quantas rotações deseja fazer: ");
  scanf("%d",&rotacoes);

  printf("Vetor original:\n");
    for(i=0;i<15;i++)
    printf("%d",vetor[i]);

  printf("Rotações:\n");

  for(j=0;j<rotacoes;j++){
    aux=vetor[0];
    for(i=0;i<14;i++)
      vetor[i]=vetor[i+1];

    vetor[14]=aux;
    printf("\n");
    for(i=0;i<15;i++)
      printf("%d  ",vetor[i]);
  }
}
