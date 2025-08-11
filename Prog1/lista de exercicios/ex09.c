/*9) Desenvolva um programa em C que solicite ao usuário informar um número inteiro N. O programa em
C deve mostrar na tela os N primeiros números primos maiores que 100.
Exemplo: se o usuário informar o número 15 (N), o programa em C deverá mostrar na tela os 15
primeiros números primos a partir de 100, ou seja, 101,103, 107, 109, 113, 127, 131, 137, 139, 149,
151, 157, 163, 167 e 173.*/

#include <stdio.h>

int main(){
  int n,x,cont=0,num=100,divisores;

  printf("Digite quantos numeros primos deseja: ");
  scanf("%d",&n);

  while(cont < n){

    num++;
    divisores=0;

    for (x=2;x<=num/2;x++)
      if(num%x==0) divisores++;

      if(divisores==0){printf("%d\n",num);cont++;}

  }
}
