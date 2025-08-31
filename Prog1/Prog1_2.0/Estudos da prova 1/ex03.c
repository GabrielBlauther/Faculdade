/*
O administrador da rodovia precisa estabelecer um controle para o tempo que um veículo levou para realizar um percurso e enquadrar nas seguintes categorias:
Categoria da Viagem
Faixa de tempo
Curta
Menos que 15 minutos
Moderada
Entre 15 minutos e 60 minutos
Longa
De 61 minutos até 90 minutos
Muito Longa
Mais 90 minutos até 180 minutos
Extremamente Longa
Acima de 180 minutos
Desenvolver um programa em Linguagem C que descubra o tipo de categoria da viagem dos clientes de acordo com o tempo de percurso.
 O programa deve receber como dados de entrada o horário de início e fim da viagem em formato HHMM; considerar que os horários são no mesmo dia,
 e que a leitura dos horários deve ser realizada em uma variável inteira para a entrada e outra variável inteira para a saída.
*/

#include <stdio.h>

int main(){

  int horarioSaida,horarioEntrada,horaFinal;


  printf("Digite o horario de entrada em hhmm: ");
  scanf("%d",&horarioEntrada);
  printf("Digite o horario de saida em hhmm: ");
  scanf("%d",&horarioSaida);

  horarioEntrada= ((horarioEntrada / 100)*60)+(horarioEntrada%100);
  horarioSaida= ((horarioSaida / 100)*60)+(horarioSaida%100);

  horaFinal = horarioEntrada+horarioSaida;

  if(horaFinal < 15){
    printf("Categoria: Curta");
  }else if(horaFinal <= 15 && horaFinal >= 60){
    printf("Categoria: Moderada");
  }else if(horaFinal >=61 && horaFinal <= 90){
    printf("Categoria: Longa");
  }else if(horaFinal > 90 <= 180){
    printf("Categoria: Muito longa");
  }else if(horaFinal > 180){
    printf("Categoria: Extremamente longa");
  }
}