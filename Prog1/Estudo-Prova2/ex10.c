#include <stdio.h>

int main(){
  int n, i,divisores=0, primo=0,cont=0;

  printf("Digite um valor: ");
  scanf("%d",&n);

  while(cont < 2){
    divisores=0;
    n++;
    for(i=2;i<=n/2;i++){
      if(n%i==0)
      divisores++;
      cont++;
      primo=n;
    }
  }
 printf("o segundo maior numero primo eh: %d",primo);
}