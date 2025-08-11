/*11) Desenvolva um programa em C que solicite ao usuário informar um número inteiro N. O programa
em C deve mostrar na tela o menor número primo maior do que N.
Exemplo: se o usuário informar o número 1000 (N), o programa em C deverá mostrar na tela o
número 1009, que é o menor número primo maior que 1000.*/

#include <stdio.h>

int main(){
  int n,x,num=0,divisores,maior=0,parar=0;

  printf("Digite um valor: ");
  scanf("%d",&n);

  num= n + 1;

  while(parar == 0){

    divisores = 0;

    for(x=2;x<=num/2;x++){
      if(num%x==0) divisores++;
    }
    if(divisores == 0){
      maior = num;
      break;
    }
    num++;
  }
  printf("número %d, que é o menor número primo maior que %d",n,maior);
  return(0);
}