/*25) O CPF é formado por onze dígitos (999999999-99), dos quais os dois últimos são verificadores
(controle), ou seja, a partir dos nove primeiros dígitos pode-se determinar os últimos dois. Considerando
o CPF no formato abcdefghi-jk, onde cada letra representa um dígito, pode-se:
- calcular o primeiro dígito verificador (j), da seguinte forma:
 - somar: 10a + 9b + 8c + 7d + 6e + 5f + 4g + 3h + 2i
 - encontrar o resto da divisão dessa soma por 11.
 - se o resto for igual a zero ou um, o dígito é zero, senão o dígito é onze menos esse resto.
- calcular o segundo dígito verificador (k):
 - somar: 11a + 10b + 9c + 8d + 7e + 6f + 5g + 4h + 3i + 2j
 - encontrar o resto da divisão dessa soma por 11.
 - se o resto for igual a zero ou um, o dígito é zero, senão o dígito é onze menos esse resto.
Desenvolver programa em C solicite ao usuário informar os primeiros nove dígitos do CPF. O
programa em C deve calcular e mostrar na tela os dígitos verificadores.*/


#include <stdio.h>

int main(){
  int num,i,digito,copia,soma1=0,soma2=0,resto,j,k;

  printf("Digite os 9 primeiros digitos do seu cpf: ");
  scanf("%d",&num);

  copia=num;
  //primeiro número verificador. For ira repetir as 9 vezes necessarias e na variavel soma vai multiplicar(somasse 1 para que comece do 10 ate o 2)
  for(i=9;i>=1;i--){
    digito = copia%10;
    soma1 += digito * (i + 1);
    copia/=10;
  }
  //primeiro digito verificador
  resto= soma1%11;
  if(resto==0 || resto==1)
    j= 0;
  else
    j = 11 - resto;

  copia=num;
  soma2 = j *2;

  for(i=9;i>=1;i--){
    digito = copia%10;
    soma2 += digito * (i + 2);
    copia/=10;
  }
  resto = soma2 % 11;

  if(resto == 0 || resto == 1)
    k = 0;
  else
    k = 11 - resto;

  printf("Os digitos verificadores são: %d%d",j,k);
  return 0;
}