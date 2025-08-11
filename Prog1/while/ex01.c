/*1) Desenvolva um programa em C que solicite ao usuário informar valores inteiros até que o usuário
digite o valor 0 (zero). Quando o valor 0 for digitado, o programa em C deverá parar de solicitar novos
valores e deverá mostrar na tela o menor número informado. Este programa em C deverá desprezar os
números negativos, ou seja, deverá encontrar o menor entre os valores positivos informados.
Exemplo: se o usuário digitar as seguintes informações:*/

#include <stdio.h>

int main(){
   int val=69,menor,i=0;

    printf("Digite um numero inteiro(0 para parar): ");
    while(val!=0){
      scanf("%d",&val);

      if(i==0&&val>0){
        menor=val;
        i++;}

      if(val<menor&&val>0)
        menor = val;
    }
  if(i!=0)
    printf("O menor numero positivo digitado foi: %d\n",menor);
  else
    printf("Nenhum valor positivo informado.");

  return(0);
}