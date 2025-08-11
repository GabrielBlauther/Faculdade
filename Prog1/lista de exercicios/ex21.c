/*21) Desenvolva um programa em C que solicite ao usuário informar um número N inteiro até 9 dígitos.
O programa em C deverá retirar os dígitos ímpares do número e mostrar na tela número resultante.
Caso o número só possua dígitos ímpares, o programa em C deve apenas mostrar na tela uma
mensagem sinalizando que o número só é formado por dígitos ímpares. */

#include <stdio.h>

int main(){
  int num,resto,novo,mult=1;

  printf("Digite um numero: ");
  scanf("%d",&num);

  while(num!=0){
    resto = num%10;
    if(resto%2==1){
      novo+=resto*mult;
      mult*=10;
    }
    num/=10;

  }
 if (mult>1)
  printf("Novo numero eh %d \n",novo);
  else
    printf("O numero so possui digitos impares\n");

}

