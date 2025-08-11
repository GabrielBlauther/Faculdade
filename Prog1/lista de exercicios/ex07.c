/*7) Desenvolva um programa em C que gere e mostre na tela os 50 primeiros números primos a partir do
número 1.
Exemplo: O programa em C deverá mostrar na tela “Os primeiros 50 primeiros números primos
são: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103,
107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211,
223, 227, 229”.*/

#include <stdio.h>

int main(){

  int divisores,x,cont=0,num=1;

  printf("Os 50 primeiros números primos ");

  while(cont<50){
    num++;
    divisores= 0; //para reiniciar a variavel em cada ciclo

    for(x=2;x<=num/2;x++){
      if(num%x==0){
       divisores++;
       break;}
    }
    if(divisores==0){
      printf("\n%d",num);
      cont++;

    }
  }
 return(0);
}
