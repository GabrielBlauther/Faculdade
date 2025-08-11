/*13) Um número perfeito é o número que é igual à soma de seus divisores, exceto o próprio número. Por
exemplo, o número 6 é perfeito pois a soma dos seus divisores 1 + 2 + 3, exceto 6, é igual a 6.
Desenvolva um programa em C que solicite ao usuário informar dez (10) valores inteiros. O
programa em C deve verificar quais os números são perfeitos e mostrar esta informação na tela. */

#include <stdio.h>

int main(){

  int i,x,num,soma=0;

  printf("Digite 10 valores.");

  for(i=1;i<=10;i++){
    printf("\nDigite o %dº número: ",i);
    scanf("%d",&num);
    soma=0;
    for(x=1;x<=num/2;x++){
      if(num%x==0)
      soma+=x;
    }
  if(soma == num)printf("é um numero perfeito");
  }
 return(0);

}