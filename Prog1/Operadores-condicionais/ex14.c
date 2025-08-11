/* 14) Desenvolva um programa que solicite o usuário informar a altura em metros e o sexo de uma
pessoa. O programa deverá calcular o peso ideal da pessoa, utilizando as seguintes fórmulas:
✔ Para Homens: ( 72.7 * altura ) - 58;
✔ Para Mulheres: ( 62.1 * altura) – 44.7.
A altura da pessoa é um valor real. O sexo da pessoa deverá ser identificado através de um
caracter. O programa deverá aceitar os caracteres “m” ou “M” para identificar pessoas do sexo
masculino e os caracteres “f” ou “F” para identificar pessoas do sexo feminino. A variável que identifica
o sexo deve ser declarada com o tipo char. */

#include <stdio.h>
main(){
  float alt;
  char s;
  printf("Digite a altura da pessoa:\n");
  scanf("%f",&alt);
  printf("Digite o sexo da pessoa:\n");
  fflush(stdin);
  s=getchar();
  if (s=='m'||s=='M')
  printf("\nO peso ideal eh %.2f\n",72.7*alt-58);
  if (s=='f'||s=='F')
  printf("\nO peso ideal eh %.2f\n",62.1*alt-44.7);
}