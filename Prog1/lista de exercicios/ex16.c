/*16) Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer. O
programa em C deve mostrar na tela os dígitos do número na ordem contrária que foram informados.
Exemplo: se o valor informado foi 32417, o programa em C deve mostrar na tela os números
7,1,4,2,3. */

#include <stdio.h>

int main(){

  int num,resto;

  printf("Digite um valor: ");
  scanf("%d",&num);

  printf("Os numeros são: ");

  while(num!=0){
    resto= num%10;
    printf("%d",resto);
    num/=10;
  }


}