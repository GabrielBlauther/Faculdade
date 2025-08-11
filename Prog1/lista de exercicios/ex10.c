/*10) Desenvolva um programa em C que solicite ao usuário informar um número inteiro N. O programa
em C deve mostrar na tela o maior número primo menor do que N.
Exemplo: se o usuário informar o número 672 (N), o programa em C deverá mostrar na tela o
número 661, que é o maior número primo menor que 672.*/

#include <stdio.h>

int main(){
  int n,x,cont=0,num=0,divisores,maior=0;

  printf("Digite um número: ");
  scanf("%d",&n);
  num = n - 1;
  while(num > 1){

    divisores=0;

    for(x=2;x<=num/2;x++){
      if(num%x==0) divisores++;
    }
    if(divisores==0){
      maior = num;
      break;
    }
    num--;
  }
  printf("número %d, que é o maior número primo menor que %d.",maior,n);
  return(0);
}