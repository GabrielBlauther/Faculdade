#include <stdio.h>

int main(){

  int num,num_temp,novo=0;

  printf("Digite um numero: ");
  scanf("%d",&num);

  num_temp=num;

  while(num_temp > 0){
    novo = novo * 10 + num_temp%10;
    num_temp/=10;
  }


printf("%d",novo);
}