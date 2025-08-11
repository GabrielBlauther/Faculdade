/*4) (00001650) Desenvolva um programa em C que leia um número N e escreva os N primeiros
números primos em ordem decrescente. Considere que N é no máximo igual a 100. Ex: Se N=5,
escreva 11,7,5,3,2.*/

#include <stdio.h>

int main(){
  int vetor[100],i,j,k,aux,p,eh_primo,num,trocou;

  printf("Digite quantos numeros primos deseja ver: ");
  scanf("%d",&p);

  num=2;
  for(i=0;i<p;i++){
    do{
      eh_primo= 1;
      for(j=2;j<=(num/2);j++){
        if(num%j==0){
          eh_primo=0;
          break;
        }
      }
      if(eh_primo == 1){
        vetor[i] = num;
      }
      num++;
    }
    while (eh_primo == 0);
  }
  trocou=1;
  while(trocou==1){
    trocou=0;
    for(k=0;k<(p-1);k++){
      if(vetor[k]<vetor[k+1]){
        aux=vetor[k];
        vetor[k]=vetor[k+1];
        vetor[k+1]=aux;
        trocou=1;
      }
    }
  }
  printf("Os %dº numeros primos são:",p);
  for(i=0;i<p;i++){
    printf("%d ",vetor[i]);
  }
}
