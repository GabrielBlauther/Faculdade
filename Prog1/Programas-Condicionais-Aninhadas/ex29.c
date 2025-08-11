/*29) Desenvolva um programa que leia seis valores inteiros que correspondam ao dia, mês e ano de
duas datas. O programa deverá mostrar na tela as datas em ordem cronológica crescente.*/

#include <stdio.h>

int main(){
  int dia,mes,ano;
  int diat,mest,anot;
  int idade;


  printf("Digite o dia:\n");
  scanf("%d",&dia);
  printf("Digite o mes:\n");
  scanf("%d",&mes);
  printf("Digite o ano:\n");
  scanf("%d",&ano);

  printf("Digite o dia de hoje:\n");
  scanf("%d",&diat);
  printf("Digite o mes atual:\n");
  scanf("%d",&mest);
  printf("Digite o ano atual:\n");
  scanf("%d",&anot);

  if(dia >= diat && mest >= mes && anot > ano)
    printf("As datas em ordem crescente eh: %d/%d/%d e %d/%d/%d", diat,mest,anot,dia,mes,ano);
  else
    printf("As datas em ordem crescente eh: %d/%d/%d e %d/%d/%d", dia,mes,ano,diat,mest,anot);


  return(0);
}