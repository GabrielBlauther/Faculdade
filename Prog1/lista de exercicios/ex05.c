/*5) Um número inteiro maior do que 1 é primo se ele possui como divisores somente o 1 e ele mesmo.
Desenvolva um programa em C que solicite ao usuário informar um valor inteiro N. O programa em C
deverá verificar se o número informado é primo e mostrar na tela uma mensagem indicando se ele ou
não é um número primo.
Exemplo: se o usuário digitar o número 21, o programa em C deverá mostrar na tela a
mensagem: “21 não é um número primo.” Se o usuário digitar o número 13, o programa em C deverá
mostrar na tela a mensagem: “13 é um número primo.”
Dica: você pode verificar se um número primo de duas formas:
• contando a quantidade de divisores que o número possui. Se ele possuir apenas dois divisores
(1 e ele mesmo), o número será primo.
• verificando se o primeiro divisor maior que 1 é igual ao próprio número. Se o primeiro divisor for
o próprio número, ele é primo.*/

#include <stdio.h>

int main(){
  int n,i,divisores=0;

  printf("Digite um numero: ");
  scanf("%d",&n);

  for(i=2;i<=n/2; i++)
    if(n%i==0) divisores++;

    if(divisores==0)
      printf("O numero %d eh primo!!",n);
    else
      printf("O numero %d não é primo",n);

return(0);
}
