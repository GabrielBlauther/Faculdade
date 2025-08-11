/*1) Desenvolva um programa que solicite ao usuário digitar três números inteiros. O programa deverá
verificar entre estes três valores qual é o maior e mostrar este valor na tela.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na tela a
mensagem “Maior valor: 43”. */

#include <stdio.h>

int main(){
  int num1,num2,num3;

  printf("Digite 3 valores: ");
  scanf("%d%d%d",&num1,&num2,&num3);

  if(num1 > num2 && num1 > num3)
    printf("o %d eh maior.",num1);

    else if (num2 > num1 && num2 > num3)
      printf("o %d eh maior.",num2);

      else
        printf("%d eh o maior",num3);

 return(0);
}
