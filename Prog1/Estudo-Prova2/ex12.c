/*Um número natural é chamado de ascendente se cada um dos seus algarismos é
estritamente maior do que qualquer um dos algarismos colocados à sua esquerda. Por exemplo, o número
3589. Faça um programa em linguagem C que leia números até que seja digitado 0 (zero) e escreva o maior
número ascendente informado. O programa deverá escrever -1 se nenhum número ascendente for
informado.*/

#include <stdio.h>

int main(){
  int num=-1,resto=0,aux,num2,anterior=10,ascendente=1,maior_ascendente=-1,achou=0;

  while(num !=0){
    printf("Digite um valor: ");
    scanf("%d",&num);
    num2=num;
    anterior=10;
    ascendente=1;
    while(num2 > 0){
      aux=num2%10;
      if(aux >= anterior){
        ascendente=0;
        break;
      }
      anterior = aux;
      num2/=10;//
    }
    if(ascendente==1){
      if(num>maior_ascendente){
        maior_ascendente=num;
      }
    }
  }
 if(achou==1)
  printf("O maior numero ascendente digitado foi: %d",maior_ascendente);
else
  printf("-1");

}