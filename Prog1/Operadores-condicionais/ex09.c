/*9) Desenvolva um programa que solicite ao usuário digitar dois números inteiros. O programa deverá
verificar entre estes dois valores qual é o menor e mostrar na tela o menor valor. Se dois valores iguais
forem digitados, o programa deverá mostrar a mensagem que dois números iguais foram mostrados.
Exemplo: se o usuário informar os números 15 e 43, deverá ser mostrado na tela a mensagem
“Menor valor: 15”. Se o usuário informar os números 15 e 15, deverá ser mostrado na tela a mensagem
“Dois números iguais foram informados”. */

#include <stdio.h>

int main() {
  int num1,num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo valor: ");
  scanf("%d",&num2);

  if(num1 == num2)
    printf("Os numeros são iguais");
  else
    if(num1 < num2)
      printf("o %d eh menor que o %d",num1, num2);
    else
      printf("o %d eh menor que o %d",num2, num1);

return(0);
}
