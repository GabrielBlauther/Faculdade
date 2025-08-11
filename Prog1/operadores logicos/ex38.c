/*38) Desenvolva um programa que solicite ao usuário a idade de uma pessoa em dias. Após a digitação,
o computador deverá calcular e mostrar na tela a idade da pessoa expressa em anos, meses e dias.
Considere para efeitos de cálculo todos os anos com 365 dias e todos os meses com 30 dias.
Exemplo: se o usuário digitar 23.789 (dias), o programa deve mostrar na tela 65 anos, 2 meses
e 4 dias. Para efetuar este cálculo, é necessário transformar a quantidade de dias em dias, meses e
anos, utilizando os operadores de divisão que fornecem a parte inteira do quociente e o resto da
divisão:*/

#include <stdio.h>

int main(){
  int idade,ano,mes,dia,resto;

  printf("Digite sua idade em dias: ");
  scanf("%d", &idade);

  ano = idade/365;
  resto = idade%365;
  mes = resto/30;
  dia = resto%30;

  printf("Sua você tem %d idade %d meses e %d dias", ano,mes,dia);

  return(0);
}