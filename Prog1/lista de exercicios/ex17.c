/*17) Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. O
programa em C deverá verificar quantas vezes o dígito 2 aparece no número e mostrar esta informação
na tela.
Exemplo: se o valor informado foi 32412, o programa em C deve mostrar na tela o dígito 2
ocorre 2 vezes no número. */

#include <stdio.h>

int main(){

  int num,dois=0,resto;

  printf("Digite um valor: ");
  scanf("%d",&num);

  while(num!=0){
    resto=num%10;
    if(resto==2){
      dois+=1;
    }
    num/=10;
  }
printf("O numero dois apareceu %d vezes",dois);
return(0);
}