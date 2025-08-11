/*8) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa em C deverá contar a quantidade de números primos informados.
Após o programa em C deverá mostrar na tela os números primos informados e a quantidade de
números primos.
*/
#include <stdio.h>

int Primo(int num){
  int j;
  if(num <= 1) return 0;

  for(j=2; j<=num/2;j++){
    if(num%j==0) return 0;
  }
  return 1;
}

int main(){
  int vetor[10],i,cont=0;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++)
  scanf("%d",&vetor[i]);

  printf("As posições aonde há numeros primos são:\n");

  for(i=0;i<10;i++){
    if(Primo(vetor[i])){
      cont++;
      printf("posição %d:%d\n", i,vetor[i]);
    }
  }
  printf("\nA quantidade de primos foi de:%d ",cont);
}
