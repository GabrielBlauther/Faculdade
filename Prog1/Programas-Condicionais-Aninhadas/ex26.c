/*  26) Desenvolva um programa que leia três valores inteiros que correspondam ao dia, mês e ano e
verifique se a data corresponde ao último dia do mês. Lembrem-se que abril, junho, setembro e
novembro tem 30 dias, fevereiro tem 28 (29 em ano bissexto) e todos os outros meses tem 31 dias.
Como resultado, o programa deve mostrar na tela uma mensagem informando se a data é o último dia
do mês.
Exemplos: Se o usuário digitar dia=31, mês=12 e ano=1990, o programa deverá mostrar na tela
a mensagem “É o último dia do mês”. Se o usuário digitar dia=29, mês=3 e ano=2015, o programa
deverá mostrar na tela a mensagem “Não é o último dia do mês”.*/

#include <stdio.h>

int main(){

  int dia,mes,ano;

  printf("Digite o dia:\n");
  scanf("%d",&dia);
  printf("Digite o mes:\n");
  scanf("%d",&mes);
  printf("Digite o ano:\n");
  scanf("%d",&ano);

  if (dia == 31 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    printf("É o ultimo dia do mês");
    else if (dia == 30 && mes == 4 || mes == 6 || mes == 9 || mes == 11 )
      printf("É o ultimo dia do mês");
      else if (dia == 28 && mes == 2)
        printf ("Data valida");
  else
    printf("Não eh o ultimo dia do mês\n");

    return(0);
}