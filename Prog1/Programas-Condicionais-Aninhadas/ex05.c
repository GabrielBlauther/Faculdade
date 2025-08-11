/*5) Desenvolva um programa que solicite ao usuário informar um conjunto de 4 valores reais nomeados
i, a, b, c. O i é um valor inteiro e positivo que indica a forma como os números devem ser mostrados na
tela. Os valores a, b, c são valores reais que devem ser mostrados na tela na seguinte ordem:
✔ Se i=1 mostrar os 3 valores a, b, c em ordem crescente;
✔ Se i=2 mostrar os 3 valores a, b, c em ordem decrescente;
✔ Se i=3 mostrar os 3 valores de forma que o maior valor entre a, b, c fique entre os outros dois.
Dica para resolver o problema: Independente da ordem que os valores devem ser mostrados na
tela, crie três variáveis auxiliares para armazenar o maior, o menor e o valor intermediário. Depois que
estas variáveis já possuírem os valores corretos, é só escrever os valores de acordo com a ordem
solicitada pelo usuário.*/

#include <stdio.h>

int main (){

  int i;
  float a,b,c,aux;

  printf("Digite 3 valores:\n");
  scanf("%f%f%f",&a,&b,&c);

  printf("Digite entre 1 a 3 qual opção deseja sendo estas abaixo: \ni=1 mostrar os 3 valores a, b, c em ordem crescente\ni=2 mostrar os 3 valores a, b, c em ordem decrescente\ni=3 mostrar os 3 valores de forma que o maior valor entre a, b, c\nDigite:  ");
  scanf("%d",&i);

  if (a > b){
    aux = a;
    a = b;
    b = aux;
  }
  if (a > c){
    aux = a;
    a = c;
    c = aux ;
  }
  if (b > c){
    aux = b;
    b = c;
    c = aux;
  }
  if (i == 1)
    printf("A ordem crescente eh %.2f => %.2f => %.2f",a,b,c);
    else if (i == 2)
      printf("A ordem decrescente eh: %.2f => %.2f => %.2f",c,b,a);
      else if (i == 3)
        printf("A ordem com o maior no meio eh: %.2f => %.2f <= %.2f", a,c,b);
      else
      printf("Numero invalido");

 return(0);
}