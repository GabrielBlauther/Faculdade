/* 9) Desenvolva um programa que solicite ao usuário digitar cinco números inteiros com valores entre 1 e
6, correspondente ao arremesso de 5 dados no jogo do general. O programa deverá escrever na tela
mensagens para indicar:
• Se os 5 valores são iguais
• Se há 4 valores iguais e um diferente
• Se os 5 valores formam uma sequência (1,2,3,4,5 ou 2,3,4,5,6)
• Se os valores formam um full-hand (3 valores iguais entre si, e os outros dois valores também
iguais entre si)
• Nenhuma das combinações acima
Observação: considere que o usuário sempre informará valores entre 1 e 6. Não precisa realizar
a conferência do valor informado.*/

#include <stdio.h>
int main() {
  int d1, d2, d3, d4, d5;
  printf("Digite os valores dos 5 dados (1 a 6): ");
  scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);

  // Verifica General (todos iguais)
  if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5) {
      printf("General!\n");
      return 0;
  }

  // Verifica Quadra (4 iguais + 1 diferente)
  if ((d1 == d2 && d2 == d3 && d3 == d4) ||
      (d1 == d2 && d2 == d3 && d3 == d5) ||
      (d1 == d2 && d2 == d4 && d4 == d5) ||
      (d2 == d3 && d3 == d4 && d4 == d5)) {
      printf("Quadra!\n");
      return 0;
  }

  // Verifica Sequência (1-2-3-4-5 ou 2-3-4-5-6)
  // Criar um "mini-vetor" temporário para ordenar os dados (sem usar vetores de verdade)
  int temp;
  // Ordena os dados com comparações (método "bubble sort" simplificado)
  if (d1 > d2) { temp = d1; d1 = d2; d2 = temp; }
  if (d2 > d3) { temp = d2; d2 = d3; d3 = temp; }
  if (d3 > d4) { temp = d3; d3 = d4; d4 = temp; }
  if (d4 > d5) { temp = d4; d4 = d5; d5 = temp; }
  if (d1 > d2) { temp = d1; d1 = d2; d2 = temp; } // Reordena se necessário

  // Checa as sequências possíveis
  if ((d1 == 1 && d2 == 2 && d3 == 3 && d4 == 4 && d5 == 5) ||
      (d1 == 2 && d2 == 3 && d3 == 4 && d4 == 5 && d5 == 6)) {
      printf("Sequência!\n");
      return 0;
  }

  // Verifica Full-hand (3 iguais + 2 iguais)
  // Checa todas as combinações possíveis de 3 e 2 dados iguais
  if (((d1 == d2 && d2 == d3 && d4 == d5) ||
       (d1 == d2 && d2 == d4 && d3 == d5) ||
       (d1 == d2 && d2 == d5 && d3 == d4) ||
       (d1 == d3 && d3 == d4 && d2 == d5) ||
       (d1 == d3 && d3 == d5 && d2 == d4) ||
       (d1 == d4 && d4 == d5 && d2 == d3) ||
       (d2 == d3 && d3 == d4 && d1 == d5) ||
       (d2 == d3 && d3 == d5 && d1 == d4) ||
       (d2 == d4 && d4 == d5 && d1 == d3) ||
       (d3 == d4 && d4 == d5 && d1 == d2))) {
      printf("Full-hand!\n");
      return 0;
  }

  // Se não encontrou nenhuma combinação
  printf("Nada especial.\n");
  return 0;
}