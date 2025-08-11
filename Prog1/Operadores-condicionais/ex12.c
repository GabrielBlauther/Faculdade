/* 12) Desenvolva um programa que solicite ao usuário informar um valor inteiro que corresponda a idade
de um nadador. Após, o programa deverá classificar o nadador nas categorias abaixo e mostrar esta
informação na tela do computador. As categorias são:
• Infantil A : 5 a 7 anos;
• Infantil B : 8 a 10 anos;
• Juvenil A : 11 a 13 anos;
• Juvenil B : 14 a 17 anos;
• Sênior : maiores de 18 anos.
Exemplo: Se o usuário informar que o nadador possui 12 anos, o programa deverá mostrar na
tela a mensagem “Juvenil A”.*/

#include <stdio.h>

int main(){
  int idade;

  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);

  if(idade >=5 && idade <=7)
    printf("CATEGORIA: Infantil A.\n");

  else if(idade >= 8 && idade <= 10)
    printf("CATEGORIA: Infantil B.\n");

  else if(idade >= 11 && idade <=13)
    printf("CATEGORIA: Juvenil A.\n");

  else if(idade >= 14 && idade <= 17)
    printf("CATEGORIA: juvenil B.\n");

  else if (idade >= 18)
    printf("CATEGORIA: Sênior.\n");

  return(0);
}