/*6) Desenvolva um programa em C que solicite ao usuário informar dez (10) valores inteiros. O programa
em C deve verificar quais os números são primos e mostrar esta informação na tela.*/

#include <stdio.h>

int main(){
  int i, n, c, divisores;

  for(i = 1; i <= 10; i++){
    printf("Digite um valor: ");
    scanf("%d", &n);

    divisores = 0;

    if(n <= 1){
      printf("%d não é um número primo.\n", n);
      continue;
    }

    for(c = 2; c <= n/2; c++){
      if(n % c == 0){
        divisores++;
        break;
      }
    }

    if(divisores == 0)
      printf("%d é um número primo.\n", n);
    else
      printf("%d não é um número primo.\n", n);
  }

  printf("Fim do programa.\n");
  return 0;
}
