/*15) Desenvolva um programa que solicite ao usuário informar 10 valores inteiros e armazene estes
valores em um vetor. O programa deverá ler também um outro valor inteiro N e verificar se este valor N
é um elemento do vetor. O programa deverá mostrar na tela uma mensagem informando se o valor N é
ou não um elemento do vetor.
Exemplo: se o usuário informar os valores:
V[0]= 2 V[2]= 87 V[4]= 43 V[6]= 23 V[8]= 121
V[1]= 76 V[3]= 10 V[5]= 54 V[7]= 88 V[9]= 231
Se o usuário digitar o valor 23, o programa deverá mostrar na tela uma mensagem indicando
que este valor está contido no vetor. Se o usuário digitar o valor 50, o programa deverá mostrar na tela
uma mensagem indicando que este valor não está contido no vetor. */

#include <stdio.h>

int main(){
  int vetor[10],i,n,encontrou=0;

  printf("Digite 10 valores:\n");
  for(i=0;i<10;i++)
    scanf("%d",&vetor[i]);

  printf("Digite um valor: ");
  scanf("%d",&n);

  for(i=0;i<10;i++){
    if(vetor[i]==n){
      encontrou = 1;
    }
  }
  if(encontrou){
    printf("Numero digitado esta dentro do vetor");
  }
  else{
    printf("Numero não está no vetor");
  }
}
