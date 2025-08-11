/*5) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá mostrar na tela a posição de cada elemento primo
desse vetor.*/

#include <stdio.h>

int primo(int num){
  int j;

  if(num <= 1) return 0;

  for(j = 2; j<=num/2;j++)
    if(num%j==0){
      return 0;
    }

  return 1;
}
int main(){
  int vetor[10],i;

  printf("Digite 10 valores inteiros:\n");
  for(i=0; i < 10; i++)
    scanf("%d",&vetor[i]);


  printf("Posições dos numeros primos no vetor:\n");
  for(i=0;i<10;i++)
    if(primo(vetor[i])){
       printf("posição %d (valor %d)\n", i ,vetor[i]);
  }
}