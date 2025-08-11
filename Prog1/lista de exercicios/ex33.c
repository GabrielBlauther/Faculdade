/*33) Desenvolva um programa em C que solicite ao usuário informar uma sequência de cinco números
inteiros. O programa em C deve verificar se estes cinco números fazem parte da sequência de
fibonacci. Após a verificação, deve ser mostrada na tela uma mensagem informando se os números
digitados fazem ou não parte da sequência de fibonacci. */

#include <stdio.h>

int main(){
  int n,aux,t1=0,t2=1,i,j;

    for(j=1;j<=5;j++){
      printf("\nDigite o %dº valor: ",j);
      scanf("%d",&n);
      t1=0;
      t2=1;
      if(n == 0 || n == 1)
        printf("É um numero fibonacci");
      else
        while(t2<=n){
          aux=t1+t2;
          t1=t2;
          t2=aux;
          if(t2==n){
            printf("\nÉ um numero fibonacci");
          }
        }
    }

  }
