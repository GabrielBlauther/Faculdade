/* 4) Desenvolva um programa em C que mostre na tela do computador os números ímpares entre 1 a
200. Neste exercício, o usuário não terá que informar nenhum valor. Apenas mostrar os números
ímpares pertencentes ao intervalo solicitado na tela.*/

#include <stdio.h>

int main(){
  int i;
  for(i=1;i<=200;i+=2)
    printf("%d, ",i);
    return(0);
}