/* 5) Desenvolva um programa que solicite ao usuário digitar dois valores reais. Após a digitação, o
computador deverá efetuar as operações de adição, subtração, multiplicação e divisão destes valores.
Os quatro resultados deverão ser mostrados na tela assim como os números digitados pelo usuário.
Exemplo: se o usuário digitar os valores 18 e 15,5, o programa deve executar as quatro
operações e mostrar na tela:
 Números digitados: 18 e 15,5
 A soma destes números é 33,5
 A subtração destes números é 2,5
 A multiplicação destes números é 279
 A divisão destes números é 1,161.*/

 #include <stdio.h>

 int main(){
  float num1,num2;

  printf("Digite o primeiro valor: ");
  scanf("%f", &num1);

  printf("Digite o segundo valor: ");
  scanf("%f", &num2);

  printf("A soma dos valores %.2f e %.2f eh:%.2f\n",num1, num2, num1+num2);
  printf("A subtração dos valores %.2f e %.2f eh:%.2f\n",num1, num2, num1-num2);
  printf("A multiplicação dos valores %.2f e %.2f eh:%.2f\n",num1, num2, num1*num2);
  printf("A divisão dos valores %.2f e %.2f eh:%.2f\n",num1, num2, num1/num2);
  return(0);
}