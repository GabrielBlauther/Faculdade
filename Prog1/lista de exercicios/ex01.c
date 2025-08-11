/*1) Desenvolva um programa em C que solicite ao usuário informar um valor inteiro N. O programa em C
deverá mostrar na tela todos os divisores do número informado.
Exemplo: se o usuário digitar o número 21, o programa em C deverá mostrar na tela os números
1, 3, 7 e 21.
Dica: para saber quais os são os divisores de um número, o programa em C deverá dividir o
valor informado por todos os números no intervalo de 2 até a metade do número informado. O programa
em C não precisa testar a divisão por 1 e por 21, pois todos os números são divisíveis por 1 e por eles
mesmos. O programa em C também não precisa testar os divisores a partir da metade do número, pois
o maior divisor de um número é ele mesmo e o segundo maior divisor é a metade do número. Não
existem divisores entre a metade do número e ele mesmo. */

#include <stdio.h>

int main(){
  int n,x;

  printf("Digite um numero: ");
  scanf("%d",&n);
  printf("Os divisores do numero %d sao:\n1\n",n);
  for(x=2;x<=n/2;x++){//este laço ira ir de 2 até o numero digitado.
    if(n%x==0){//este if(condição) valida se a divisão da iteração do laço tem o resto da divisão("%") igual a zero que valida como divisor
      printf("%d\n",x);//mostra na tela o valor validado
    }
  }
  printf("%d",n);// este printf mostra o numero digitado inicialmente pois como no primeiro printf sabemos que o valor sempre vai ser divisivel por 1 e por ele mesmo e nosso laço nao esta testando essas possibilidades

}