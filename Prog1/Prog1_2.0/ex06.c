/*
Exercício 06) Desenvolva um programa que solicite ao usuário
informar dois valores inteiros. Após a digitação, o computador deve calcular o
quadrado da diferença do primeiro valor pelo segundo. O resultado desta
operação deve ser mostrado na tela.
Exemplo: se o usuário informar os valores 23 e 17, o programa deve realizar o
cálculo (23-17)2 e mostrar na tela o resultado (36). Detalhamento da conta:
Subtrair os números e fazer a elevação na potência de 2.
*/

#include <stdio.h>


int main(){
  int n1, n2,quadrado_diferenca;

  printf("Digite um numero: ");
  scanf("%d", &n1);
  printf("Digite o outro valor: ");
  scanf("%d",&n2);

  quadrado_diferenca= (n1-n2)*(n1-n2);

  printf("O resultado do quadrado da diferença é: %d",quadrado_diferenca);

}