#include <stdio.h>

int main(){

  int num[10],i;

    printf("Digite 10 valores: ");
    for(i=0;i<10;i++){
      scanf("%d",&num[i]);
      if(num[i]< 0)
        printf("%d ", i);
   }

    }
