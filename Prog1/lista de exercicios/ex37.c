/*37) Desenvolva um programa em C que solicite o usuário informar o número de termos da série
 1/2 + 1/3 + 1/5 + 1/7 + 1/11 + 1/13 + 1/17 +..... . O programa em C deverá calcular a soma dos n termos solicitados.
Nesta série, os denominadores são a sequência de números primos a partir de 2.*/

#include <stdio.h>

int main(){
  int i=2,divisores=0,contador=0,termos,x,eh_primo;
  float soma=0;

  printf("Digite o numero de termos da série: ");
  scanf("%d",&termos);

  while(contador < termos){
    eh_primo=1;

    for(x=2;x<=i/2;x++){
      if(i%x==0)
        eh_primo=0;
        break;
    }
    if(eh_primo){
      printf( "1/%d + ",i);
      soma+=(float)1/i;
      contador++;
    }
    i++;
  }
  printf("\n\nA soma dos termos é:%.2f",soma);
  }
