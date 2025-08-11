/*31) Desenvolva um programa em C que gere os 20 primeiros termos da série de fibonacci e mostre na
tela apenas os termos que são primos.*/

#include <stdio.h>

int main(){

  int f1=1,f2=0,i,aux,j,cont;

  printf("Dentro dos 20 primeiros termos fibonacci temos estes numeros primos: ");

  for(i=3;i<=20;i++){
    aux = f1+f2;
    cont=0;
    for(j=1;j<=aux;j++){
      if(aux%j==0)
        cont++;
    }
    if(cont==2)
      printf("\n%d",aux);
    f1=f2;
    f2=aux;

  }

}