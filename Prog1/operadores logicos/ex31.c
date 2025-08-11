/*31) Desenvolva um programa que solicite ao usuário digitar um tempo em horas, minutos e segundos.
Após a digitação, o computador deverá converter este tempo para segundos e mostrar esta informação
na tela do computador. O programa deve permitir que o usuário informe os horários através de três
informações independentes: hora,minuto e segundo.
Exemplo: Se o usuário digitar 30 horas, 20 minutos e 40 segundos, o programa deverá mostrar
na tela 109.240 segundos (30 * 3600 + 20 * 60 + 40).*/

#include <stdio.h>

int main(){
  int valor[3];
  char *tempo[] = {"hora","minuto","segundo"};

  for(int i= 0; i<3; i++) {
    printf("Digite  %s: ", tempo[i]);
    scanf("%d", &valor[i]);
  }

  printf("O tempo em segundos é %d", ((valor[0]*3600) + (valor[1] * 60) + valor[2]));

  return(0);
}