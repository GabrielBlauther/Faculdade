/*  30) Desenvolva um programa que leia três valores inteiros que correspondam a hora, minuto e segundo
de um horário. O programa deverá mostrar na tela o horário (hora, minuto e segundo) correspondente
ao segundo seguinte. Este programa deve funcionar também se houver mudança de dia*/

#include <stdio.h>

int main(){

  int segundo,minuto,hora;

  printf("Digite hora minuto e segundo:\n");
  scanf("%d%d%d",&hora,&minuto,&segundo);

  segundo++;

    if(segundo == 60){
      segundo = 0;
      minuto++;
    }
    if (minuto == 60){
      minuto = 0;
      hora++;
    }
    if (hora == 24) {
      hora = 0;
    }


 printf("A hora atualizada é %d horas %dminutos %dsegundos\n",hora,minuto,segundo);

  return(0);
}