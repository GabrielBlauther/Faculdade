/*  43) Uma empresa concederá um aumento de salário aos seus colaboradores, variáveis de acordo com
o cargo, conforme a tabela abaixo:
Código Cargo Índice de aumento
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%
Outros Outro 40%
Desenvolva um programa que solicite ao usuário informar o código do cargo do colaborador e o
seu salário atual e calcule seu novo salário de acordo com a tabela. O programa deverá mostrar na tela
o nome do cargo, o salário antigo, o novo salário e o valor do aumento salarial.
Exemplo: se usuário informar como código do cargo 102 e o salário atual R$ 5000, o programa
deverá mostrar na tela:
Cargo: Engenheiro
Salário antigo: R$ 5000
Novo Salário: R$ 6000
Valor do aumento: R$ 1000*/


#include <stdio.h>

int main(){

  int cargo,perc;
  float salario;

  printf("Digite o numero do cargo: ");
  scanf("%d",&cargo);
  printf("Digite o seu salario: ");
  scanf("%f",&salario);

  if(cargo == 101)
  perc = 10;
  printf("Gerente");

    else if(cargo == 102)
      perc = 20;
      printf("Engenheiro");

      else if(cargo == 103)
        perc = 30;
        printf("Técnico");

      else
        perc = 40;
        printf("Outros");

 printf("\n Salario antigo:%.2fR$", salario);
 printf("Novo salario:%.2f",salario + salario*perc/100);
 printf("Valor do aumento:%.2f",salario*perc/100);

 return(0);
}