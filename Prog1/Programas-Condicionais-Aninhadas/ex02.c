/*2) Desenvolva um programa que solicite ao usuário digitar três números inteiros. O programa deverá
verificar entre estes três valores qual é o menor e mostrar este valor na tela.
Exemplo: se o usuário informar os números 15, 43 e 34 deverá ser mostrado na tela a
mensagem “Menor valor: 15”.*/

#include <stdio.h>

int main(){

  int n1,n2,n3;

  printf("Digite 3 valores:\n");
  scanf("%d%d%d",&n1,&n2,&n3);

  if(n1 < n2 && n1 < n3)
    printf("O %d eh o menor valor.\n",n1);

    else if (n2 < n1 && n2 < n3)
      printf("%d é o menor valor.\n",n2);

      else
        printf("%d é o menor valor.\n",n3);

 return(0);
}