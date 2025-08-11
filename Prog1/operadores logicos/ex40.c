/* 40) Desenvolva um programa que solicite ao usuário informar a quantidade de alunos em uma sala de
aula e a quantidade de alunos por grupo. O programa deve calcular e mostrar na tela a quantidade de
grupos que podem ser formados e a quantidade de alunos que não foram suficientes para formar mais
um grupo.
Exemplo: Se uma turma possuir 35 alunos e cada grupo deve ser formado por 3 alunos, poderão
ser formados 11 grupos e restarão 2 alunos. Para desenvolver este programa, utilizar os operadores de
divisão e o resto da divisão:*/

#include <stdio.h>

int main(){
  int alunos, grupos,resto, divisao;

  printf("Digite a quantidade de alunos: ");
  scanf("%d", &alunos);
  printf("Quantos alunos por grupo: ");
  scanf("%d", &grupos);

  divisao = alunos/grupos;
  resto= alunos%grupos;

  printf("A quantidade de grupos é %d e o total de alunos restantes é %d",divisao, resto);

  return(0);
}