/*27) Desenvolva um programa que leia seis valores inteiros que correspondam ao dia, mês e ano da
data de nascimento de uma pessoa e da data atual. O programa deverá verificar e mostrar na tela uma
mensagem indicando se esta pessoa é maior ou menor de idade.*/

#include <stdio.h>

int main(){

  int dia,mes,ano;
  int diat,mest,anot;
  int idade;


  printf("Digite o dia do seu nascimento:\n");
  scanf("%d",&dia);
  printf("Digite o mes do seu nascimento:\n");
  scanf("%d",&mes);
  printf("Digite o ano do seu nascimento:\n");
  scanf("%d",&ano);

  printf("Digite o dia de hoje:\n");
  scanf("%d",&diat);
  printf("Digite o mes atual:\n");
  scanf("%d",&mest);
  printf("Digite o ano atual:\n");
  scanf("%d",&anot);

  idade = anot - ano;

  if (mest < mes || (mest == mes && diat < dia))
    idade--;
    if (idade >= 18)
      printf("A pessoa é maior de idade.\n");
   else
      printf("A pessoa é menor de idade.\n");


  return 0;
}