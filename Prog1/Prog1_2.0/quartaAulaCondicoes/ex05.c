/*Exercício 05) Desenvolva um programa que solicite ao usuário
informar um conjunto de 4 valores reais nomeados i, a, b, c. O i é um valor inteiro
e positivo que indica a forma como os números devem ser mostrados na tela.
Os valores a, b, c são valores reais que devem ser mostrados na tela na seguinte
ordem:
• Se i=1 mostrar os 3 valores a, b, c em ordem crescente
• Se i=2 mostrar os 3 valores a, b, c em ordem decrescente
• Se i=3 mostrar os 3 valores de forma que o maior valor entre a, b, c fique
entre os outros dois
Dica para resolver o problema: Independente da ordem que os valores devem
ser mostrados na tela, crie três variáveis auxiliares para armazenar o maior, o
menor e o valor intermediário. Depois que estas variáveis já possuírem os
valores corretos, é só escrever os valores de acordo com a ordem solicitada pelo
usuário.*/

#include <stdio.h>

int main(){
  int i;
  float maior,menor,meio,n1,n2,n3;

  printf("Digite 3 numeros:\n");
  scanf("%f%f%f",&n1,&n2,&n3);

  printf("Digite de 1 a 3 a opção que deseja");
  scanf("%d",&i);

  if(n1>n2 && n1 > n3){
    maior=n1;
  }else if(n2>n1 && n2>n3){
    maior=n2;
  }else{
    maior=n3;
  }

  //menor
  if(n1<n2 && n1<n3){
    menor=n1;
  }else if(n2<n1 && n2<n3){
    menor=n2;
  }else{
    menor=n3;
  }

  meio= (n1+n2+n3)- maior-menor;

  if(i>=1 && i<=3){
    if(i==1){
      printf("em ordem crescente: %.2f %.2f %.2f", menor, meio, maior);
    }else if(i == 2){
      printf("Em ordem decrescente:%.2f %.2f %.2f ", maior, meio, menor);
    }else{
      printf("Com o maior no meio: %.2f %.2f %.2f", menor, maior, meio);
    }
  }else{
    printf("codigo invalido");
  }
}