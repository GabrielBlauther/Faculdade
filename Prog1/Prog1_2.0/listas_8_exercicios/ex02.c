/*
Lista 08 | Exercício 03) Desenvolva um programa em C que solicite ao usuário
informar 10 números inteiros. O programa em C deverá verificar qual o tipo de
sequência os números informados formam. O programa em C deve mostrar uma
mensagem na tela indicando o tipo de sequência, isto é, estritamente crescente,
crescente, estritamente decrescente, decrescente e desordenada.
• Estritamente Crescente: se a1 < a2 < a3 < .... < an < …
• Crescente: se a1 ≤ a2 ≤ a3 ≤ …≤ an ≤ ...
• Estritamente Decrescente: se a1 > a2 > a3 > .... > an > …
• Decrescente: se a1 ≥ a2 ≥ a3 ≥ .... ≥ an ≥ …
• Desordenada: quando os elementos não estão em ordem.
*/

#include <stdio.h>

int main(){
  int i,num_atual,num_anterior,estritamente_cresc=1,crescente = 1,estritamente_decresc = 1,decrescente = 1;

  for(i=0;i<10;i++){
    printf("Digite o %dº numero: ",i+1);
    scanf("%d",&num_atual);
    if(i==0){
      num_anterior = num_atual;
    }
    if(i>0){
      if(num_anterior >= num_atual ){
        estritamente_cresc=0;
      }
      if(num_anterior > num_atual ){
        crescente = 0;
      }
      if(num_anterior <= num_atual){
        estritamente_decresc = 0;
      }
      if(num_anterior < num_atual){
        decrescente = 0;
      }
    }
    num_anterior = num_atual;
  }
  if(estritamente_cresc == 1){
      printf("Ordem estritamente crescente");
  } else if(crescente == 1){
      printf("ordem crescente");
  } else if(estritamente_decresc == 1){
      printf("estritamente decrescente");
  } else if(decrescente == 1){
      printf("Ordem decrescente");
  } else {
      printf("serie desordenada");
  }

}