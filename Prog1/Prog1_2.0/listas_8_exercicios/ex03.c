/*
 Exercício 04) Desenvolva um programa em C que solicite ao usuário
informar a quantidade de números inteiros que ele deseja informar. O programa
em C deverá verificar se os números informados formam alguma sequência
estritamente crescente, mostrando na tela o primeiro e último valor da sequência.
O programa em C deverá se preocupar em encontrar apenas uma sequência
estritamente crescente, mesmo que os dados informados pelo usuário formem
mais de uma sequência estritamente crescente.
Dica para desenvolver este programa em C: Use um contador, incrementando-o
ao encontrar um elemento igual ao menor corrente, e reinicializando-o ao
encontrar um elemento menor do que o menor corrente.
O programa em C deverá mostrar uma mensagem informando que ele encontrou
uma sequência estritamente crescente, mostrando na tela o número -7 como
primeiro valor da sequência e o número 345 como o último valor da sequência.
*/

#include <stdio.h>

int main(){

  int num,qntd,cont=0,i,maior,menor,num_anterior,flag=0;

  printf("Digite a quantidade de numeros desejados: ");
  scanf("%d",&qntd);


  for(i=0;i<qntd;i++){
    printf("Digite o valor do %dº numero: ",i+1);
    scanf("%d",&num);
    if(i==0){
      maior=num;
      menor=num;
      num_anterior=num;
      // printf("\nmaior:%d\n",maior);
    }
    if(i>0){
      if(num_anterior>num){
          cont=0;
        }
      if(num_anterior<num){
        cont++;
        if(menor>num_anterior){
          menor=num_anterior;
        }
        if(cont>2){
          if(num>maior){
            // printf("cheguei aqui\n");
            maior=num;
            flag=1;
          }
        }
      }
    }
    num_anterior=num;
  }

  if(flag==1){
    printf("\nSequencia estritamente crescente encontrada menor numero: %d e o maior numero: %d",menor,maior);
  }
}