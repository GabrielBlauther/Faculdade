/* 3) Desenvolva um programa em C que mostre na tela do computador os números pares entre 1 a 50.
Neste exercício, o usuário não terá que informar nenhum valor. Apenas mostrar os números pares
pertencentes ao intervalo solicitado na tela.*/

#include <stdio.h>
int main(){
  int i;
  for(i=2;i<=50;i+=2)
    printf("%d, ",i);
    return(0);
}