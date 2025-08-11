/*5) Desenvolva um programa que solicite ao usuário digitar seis números inteiros. O programa deverá
contar e mostrar na tela a quantidade de valores ímpares informados.
Exemplo: se o usuário informar os números 21, 15, 43, 34, -7 e 120 deverá ser mostrado na tela
a mensagem “Foram informados 4 números ímpares.”*/

#include <stdio.h>

int main(){
  int valor[6];
  int impar = 0, par = 0;

  for(int i= 0; i<6; i++) {
    printf("Digite  %d: ", i + 1);
    scanf("%d", &valor[i]);
  }
  for(int i=0; i<6; i++)
    if (valor[i] % 2 == 1 || valor[i] % 2 == -1){
      impar++;
    } else {
        par++;
    }
printf("Foram informados %d números ímpares e %d pares\n", impar,par);

return(0);
}
