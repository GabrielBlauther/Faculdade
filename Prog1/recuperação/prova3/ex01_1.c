/*Faça um programa em c que leia 50 numeros inteiros positivos e armazeneos em um vetor
fazendo uso da rotação circular para direita, desloque os elementos do vetor uma posição para direita,
colocando na primeira posição o valor que estava na última.
essa rotação devera ser repetida até que a ultima posição o valor que estava na ultima.
Essa rotação deverá ser repetida até que a ultima posição do vetor contenha um numero primo.
Nada precisa ser feito se na ultima posição do vetor ja contenha um valor primo. No final escreva o vetor resultante*/

#include <stdio.h>

int main(){

  int vetor[50],eh_primo,i,aux;

  for(i=0;i<50;i++){
    printf("Digite o valor do %dº numero: ", i+1);
    scanf("%d",&vetor[i]);
  }

  while(1){
    eh_primo=1;

    for(i=2;i<vetor[49]/2;i++){//verificamos se o numero da posição 49 é primo o loop tem que ser do numero em especifico não do vetor
      if(vetor[49]%i==0){
        eh_primo=0;
        break;
      }
    }
    if(eh_primo==1){//aqui verificamos se apos o loop se o eh_primo continuou 1, caso permaneceu um foi pq não entrou no if que o tornaria não primo e assim nos mostrando que ele é um primo
      break;
    }

    //se chegar até aqui é pq o 49 não é primo

    aux=vetor[49];
    for(i=49;i>1;i--){//como vamos fazer a rotação para direita precisamos começar do ultimo, e só é feito uma rotação em todos os elementos
      vetor[i]=vetor[i-1];
    }
    vetor[0]=aux;
  }
        printf("Vetor final:\n");
      for(i = 0; i < 50; i++){
        printf("%d ", vetor[i]);
    }
}