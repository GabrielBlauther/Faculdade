/* 36) Desenvolva um programa que solicite ao usuário a data de nascimento de uma pessoa e a data
atual. O programa deve permitir que o usuário informe a data através de três informações
independentes: dia, mês e ano. Após a digitação, o computador deverá calcular e mostrar na tela a
idade da pessoa em anos.
Exemplo: se o usuário digitar a data de nascimento 16 (dia), 3 (mês) e 2004 (ano) e a data atual
como 25 (dia), 9 (mês) e 2015 (ano), o programa deve mostrar na tela 11 anos. Diferentemente
dos exercícios anteriores, este exercício não estabelece todos os meses possuem 30 dias e que os
anos possuem 365 dias. Então uma forma para resolver este problema é transformar os três valores
(dia, mês e ano) de cada data em um valor único e após subtrair estes valores.
• converter as datas em um valor único, de forma a deixá-la no formato ano mês dia. Para isso,
multiplica-se o ano por 1000 e o mês por 100:
2004 * 1000 + 3 * 100 + 16 = 20040316
2015 * 1000 + 9 * 100 + 25 = 20150925
• subtrair a data inicial da data de nascimento: 20150925 – 20040316 = 110609
• dividir o valor obtido por 1000 utilizando o operador de divisão que fornece a parte inteira do
quociente:*/

#include <stdio.h>

int main(){
  int dia,mes,ano,diat,mesat,anoat,conversaonasc,conversaoatual ;

 //Data de nascimento
  printf("Digite seu dia de nascimento: ");
  scanf("%d", &dia);
  printf("Digite seu mês de nascimento: ");
  scanf("%d", &mes);
  printf("Digite seu ano de nascimento: ");
  scanf("%d", &ano);

  printf("Digite o dia de atual: ");
  scanf("%d", &diat);
  printf("Digite o mês atual: ");
  scanf("%d", &mesat);
  printf("Digite o ano atual: ");
  scanf("%d", &anoat);

  conversaonasc = ano * 1000 + mes *100 + dia;
  conversaoatual = anoat * 1000 + mesat *100 + diat;

  printf("Sua idade é: %d", (conversaoatual - conversaonasc )/1000);

  return(0);
}