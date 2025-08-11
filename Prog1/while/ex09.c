/*9) Desenvolva um programa em C que solicite ao usuário informar um valor real correspondente ao
valor por hora que um trabalhador ganha e 22 pares de valores inteiros que correspondam a hora de
entrada e a hora de saída (valores inteiros, sem minutos) do trabalhador. O programa em C deve
calcular e mostrar na tela o valor que o trabalhador ganhou no mês. Considere que ele pode entrar em
um dia e sair no outro, mas que o total de horas trabalhadas não excede 23 horas.*/

#include <stdio.h>

int main(){
  float valor_hora, salario = 0;  // Inicialize salario com 0
  int dia = 0, hora_saida, hora_entrada;

  printf("Digite o valor por hora: ");
  scanf("%f", &valor_hora);

  while(dia < 22){
    dia++;
    printf("Hora de entrada do %dº dia: ", dia);
    scanf("%d", &hora_entrada);
    printf("Hora de saída: ");
    scanf("%d", &hora_saida);

    int horas_trabalhadas;

    // Corrigido para tratar saída no dia seguinte
    if(hora_saida >= hora_entrada)
      horas_trabalhadas = hora_saida - hora_entrada;
    else
      horas_trabalhadas = (24 - hora_entrada) + hora_saida;

    // Validação de horas (não pode exceder 23 horas por dia)
    if(horas_trabalhadas <= 23)
      salario += valor_hora * horas_trabalhadas;
    else
      printf("Horas inválidas no dia %d. Ignorando esse dia.\n", dia);
  }

  printf("Total ganho no mês: R$ %.2f\n", salario);

  return 0;
}
