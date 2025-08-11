/*10) Desenvolva um programa em C que solicite ao usuário informar um valor inteiro que corresponda o
número da matrícula do colaborador na organização, um valor real correspondente ao valor por hora
que um trabalhador ganha e 22 pares de valores inteiros que correspondam a hora de entrada e a hora
de saída (valores inteiros, sem minutos) do trabalhador. O programa em C deve calcular e mostrar na
tela a matrícula do colaborador e o valor que o trabalhador ganhou no mês. Considere que ele pode
entrar em um dia e sair no outro, mas que o total de horas trabalhadas não excede 23 horas.
O programa em C deverá receber estes valores várias vezes, para um número não determinado
de colaboradores. O programa em C deverá encerrar a leitura dos dados quando o usuário informar 0
na matrícula do colaborador.*/

#include <stdio.h>

int main(){
  int matricula,horas_trabalhadas,dia=1,hora_entrada,hora_saida;
  float valor_hora,salario;

  printf("Digite o numero da matrícula (0 para parar): \n");
  scanf("%d",&matricula);

  while(matricula != 0){
    printf("Digite o valor por hora: ");
    scanf("%f", &valor_hora);
    salario = 0; // zera para cada colaborador
    dia = 1;

    while(dia <= 22){
      printf("Hora de entrada do %dº dia: ", dia);
      scanf("%d", &hora_entrada);
      printf("Hora de saída: ");
      scanf("%d", &hora_saida);

      if(hora_saida >= hora_entrada){
        horas_trabalhadas = hora_saida - hora_entrada;
      }else{
        horas_trabalhadas = (24 - hora_entrada) + hora_saida;
      }
      if(horas_trabalhadas <= 23){
        salario += valor_hora * horas_trabalhadas;
      }else{
        printf("Horas inválidas no dia %d. Ignorando esse dia.\n", dia);
      }
      dia++;
    }
    printf("Matrícula: %d | Total ganho no mês: R$ %.2f\n\n", matricula, salario);

    // Pergunta a matrícula novamente para o próximo colaborador
    printf("Digite o número da matrícula (0 para parar): ");
    scanf("%d", &matricula);
  }
 return(0);
}