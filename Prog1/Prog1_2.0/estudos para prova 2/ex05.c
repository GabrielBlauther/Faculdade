#include <stdio.h>
#include <math.h>

int main(){
  int serie,num,i,j,k;
  float numerador,denominador=2,soma=0;

  printf("Digite o numero que sera inserido na serie: ");
  scanf("%d",&num);
  printf("Digite até aonde a serie deve ir: ");
  scanf("%d",&serie);

  for(i=1;i<=serie;i++){
    numerador=pow((num-i),i+2);
    for(j=1;j<=i+1;j++){
      denominador*=j;
    }

    if(i==1)
      printf("%.2f / %.2f ",numerador,denominador);

    if(i%2==0){
      soma+=numerador/denominador;
      printf("+ %.2f / %.2f ",numerador,denominador);
    }else{
      soma-=numerador/denominador;
      printf("- %.2f / %.2f ",numerador,denominador);
    }
  }
  printf("A soma das serie é %.2f",soma);

}