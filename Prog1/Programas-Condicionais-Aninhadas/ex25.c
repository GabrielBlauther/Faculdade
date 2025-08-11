/* 25) Desenvolva um programa que leia três valores inteiros que correspondam ao dia, mês e ano e
verifique se estes valores formam uma data válida. Para ser válido, o mês informado deve pertencer ao
intervalo de 0 a 12. Os dias devem ser validados de acordo com os meses: abril, junho, setembro e
novembro tem 30 dias, fevereiro tem 28 e todos os outros meses tem 31 dias.
Como resultado, o programa deve mostrar na tela uma mensagem informando se a data é válido ou
não. */

#include <stdio.h>

int main(){
  int dia,mes,ano;

  printf("Digite o dia:\n");
  scanf("%d",&dia);
  printf("Digite o mes:\n");
  scanf("%d",&mes);
  printf("Digite o ano:\n");
  scanf("%d",&ano);

  if (mes < 1 || mes > 12)
  printf("Data invalida\n");

  if(dia <=31 && mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    printf("Data valida");
    else if(dia <= 30 && mes == 4 || mes == 6 || mes == 9 || mes == 11 )
      printf("Data valida");
      else if (dia <= 28 && mes == 2)
        printf ("Data valida");
  else
    printf("Data invalida\n");

return(0);
}