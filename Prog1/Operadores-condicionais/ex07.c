/*7) Desenvolva um programa que solicite ao usuário digitar dois números inteiros. O programa deverá
verificar se estes números são múltiplos entre si. Para realizar esta verificação, devemos dividir os dois
números entre si e verificar se o resto da divisão é igual a zero. O programa deve mostrar na tela uma
das seguintes mensagens "São múltiplos" ou "Não são múltiplos".
Exemplo: se o usuário informar os números 3 e 21, a mensagem “ São múltiplos” deverá ser
mostrada na tela. Se o usuário informar os números 5 e 7, a mensagem “ Não são múltiplos” deverá ser
mostrada na tela.
É importante salientar que para resolver este problema, duas divisões devem ser realizadas. No
primeiro exemplo, devemos dividir 3/21 e 21/3. Se uma das duas divisões resultar em resto zero (21/3),
então os dois números serão múltiplos.*/

#include <stdio.h>

int main() {
  int num1,num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  if (num1 % num2 == 0 || num2 % num1 == 0)
    printf("São multiplos");

  else
    printf("Não são multiplos");

return(0);
}