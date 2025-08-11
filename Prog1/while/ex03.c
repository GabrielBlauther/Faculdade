/*Desenvolva um programa em C que solicite ao usuário informar 20 números inteiros. O programa em
C deverá mostrar na tela o menor número digitado e a quantidade de números que são iguais a este
número.*/

#include <stdio.h>

int main(){
  int i=0,num=0,menor=0,contador=0;
  printf("Digite 20 valores\n");
  while(i < 20){
    printf("\nnumero %d: ", i + 1);
    scanf("%d",&num);
    i++;

    if(menor == 0)
      menor = num;

    if (num < menor) {          // novo menor encontrado
      menor = num;
      contador = 1;           // reinicia a contagem
    } else if (num == menor) {  // mais um igual ao menor
        contador++;
    }
 }
  printf("O menor valor digitado eh %d e repitiram %d vezes",menor,contador);
  return(0);
}