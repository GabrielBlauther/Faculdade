/*20) Desenvolva um programa em C que solicite ao usuário informar dez (10) números inteiros
quaisquer. O programa em C deve calcular e mostrar na tela, para cada um dos números informados, a
a soma dos seus dígitos formantes.*/

#include <stdio.h>

int main(){

  int num,resto,soma=0,i;

  for(i=1;i<=10;i++){
    num=0;
    soma=0;
    printf("\nDigite o %dº valor: ",i );
    scanf("%d",&num);
    while(num!=0){
      resto= num%10;
      soma+=resto;
      num/=10;
    }
    printf("A soma é:%d \n",soma);
  }
}