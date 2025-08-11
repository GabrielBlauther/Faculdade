/*14) Desenvolva um programa em C que gere os primeiros 4 números perfeitos e mostre estes números
na tela.
Exemplo - O programa em C deve mostrar na tela os números 6, 28, 496 e 8.128. */

#include <stdio.h>

int main(){

  int cont=0,divisores=0,x,num=0;

  printf("Gerador de numeros perfeitos: ");

  while(cont!=4){
    divisores=0;
    num++;
    for(x=1;x<=num/2;x++){
      if(num%x==0)
      divisores+=x;
    }
    if(num==divisores){
      printf("\n%d",num);
      cont++;}
  }
}