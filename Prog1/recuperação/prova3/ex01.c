/*Faça um programa em c que leia 50 numeros inteiros positivos e armazeneos em um vetor
fazendo uso da rotação circular para direita, desloque os elementos do vetor uma posição para direita,
colocando na primeira posição o valor que estava na última.
essa rotação devera ser repetida até que a ultima posição o valor que estava na ultima.
Essa rotação deverá ser repetida até que a ultima posição do vetor contenha um numero primo.
Nada precisa ser feito se na ultima posição do vetor ja contenha um valor primo. No final escreva o vetor resultante*/

#include <stdio.h>

int main(){
  int vetor[50], i, j,aux, eh_primo;

  for(i=0;i<50;i++){
    printf("Digite o %dº numero: ",i+1);
    scanf("%d", &vetor[i]);
  }

  while(1){
    eh_primo=1;

    if(vetor[49]<2){
      eh_primo=0;
    }else{
      for(i=2;i<= vetor[49]/2;i++){
        if(vetor[49]%i==0){
          eh_primo=0;
          break;
        }
      }
    }
    //se é primo para o loop
    if(eh_primo == 1){
      break;
    }
    //se não é primo, faz rotação para direita
    aux = vetor[49]; //salva o ultimo

    for(i=49; i > 0; i--){
      vetor[i] = vetor[i-1];
    }
    vetor[0]= aux; //ultimo vai para primeiro
  }
      printf("Vetor final:\n");
      for(i = 0; i < 50; i++){
        printf("%d ", vetor[i]);
    }

}