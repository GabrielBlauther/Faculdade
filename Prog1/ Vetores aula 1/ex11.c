/*11) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene
estes valores em um vetor. O programa em C deverá calcular a média dos valores informados e mostrar
na tela todos os valores que estão acima da média calculada.*/

#include <stdio.h>

int main(){
  int vetor[10],i,soma=0,media=0;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++)
    scanf("%d",&vetor[i]);

  for(i=0;i<10;i++){
    soma+=vetor[i];
  }
  media = soma/10;
  printf("A média foi: %d\n",media);
  printf("Os valores acima da media são: ");
  for(i=0;i<10;i++){
    if(vetor[i]>media){
      printf("%d, ",vetor[i]);
    }
  }
}