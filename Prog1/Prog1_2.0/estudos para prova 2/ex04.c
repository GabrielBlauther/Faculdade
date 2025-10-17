#include <stdio.h>

int main(){
  int num,novo_num,capicua=0,aux=0;

  printf("Digite um numero: ");
  scanf("%d",&num);
  novo_num=num;

  while(novo_num > 0){
    aux=novo_num%10;
    if(capicua==0){
      capicua+=aux;
      printf("\n%d",capicua);
    }else{
      capicua=(capicua*10)+aux;
      printf("\n%d",capicua);
    }
    novo_num/=10;
  }
  if(num == capicua){
    printf("\nO numero %d é um numero capicua",num);
  }else{
    printf("\nO numero %d não é um numero capicua pois o inverso dele é: %d",num,capicua);
  }
}