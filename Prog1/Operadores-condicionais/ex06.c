/*6) Desenvolva um programa que solicite ao usuário digitar seis números inteiros. O programa deverá
somar os valores pares informados e mostrar o resultado desta soma na tela.
Exemplo: se o usuário informar os números 21, 15, 43, 34, -7 e 120 deverá ser mostrado na tela
a mensagem “A soma dos números pares digitados é 154.”*/

#include <stdio.h>
int main(){
  int valor[6],soma;

  for(int i= 0; i<6; i++) {
    printf("Digite  %d: ", i + 1);
    scanf("%d", &valor[i]);
  }
  for(int i=0; i<6; i++)
    if (valor[i] % 2 == 0){
      soma += valor[i];
    }
printf("A soma dos numeros pares eh: %d",soma);
}