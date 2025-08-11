/* 5) Desenvolva um programa em C que solicite ao usuário informar 10 valores inteiros. A cada número
par digitado, o programa em C deverá mostrar a mensagem “É um número par.”.*/

#include <stdio.h>

int main(){
  int num,i;
  for(i=1;i <=10; i++){
    printf("Digite o %dº numero: ",i );
    scanf("%d",&num);
    if(num%2 == 0)
      printf("É par esse ai mano Xdd\n");
  }
  return(0);
}