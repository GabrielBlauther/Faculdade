/*Desenvolva um programa em C e solicite ao usuario informar dois valores inteiros que correspondam ao numero de termos da serie e um valor positivo X
O programa deve mostrar todos os termos da série e soma dos termos da série em um valor positivo X
*/

#include <math.h>
#include <stdio.h>

int main(){

  int num,termos,i,j,k;
  double divisor,denominador,soma=0;

  printf("Digite o numero: ");
  scanf("%d",&num);
  printf("Digite o numero de termos: ");
  scanf("%d",&termos);

  for(i=0;i<=termos;i++){
    divisor=1;
    for(j=1;j<=i+1;j++){
      divisor*=j;
    }
    denominador=pow((num-i),(i+2));

    if(i%2==1)
      soma+=denominador/divisor;
    else
      soma-=denominador/divisor;
  }

  printf("A soma da serie é de: %.4f",soma);
}

