/*10) (00002100) Desenvolva um programa em C leia dois vetores V(10) e W(10), ordenando cada um
em ordem crescente. Gere, a seguir, um vetor Z(20) com os elementos de V e W, também em ordem
crescente. Escreva o vetor Z.*/

#include <stdio.h>
int main(){
  int v[10],w[10],z[20],aux,i,trocou;

  for(i=0;i<10;i++){
    printf("Digite o %dº valor de v: ",i+1);
    scanf("%d",&v[i]);
    printf("Digite o %dº valor de w: ",i+1);
    scanf("%d",&w[i]);
  }
  trocou=1;
  do{
    trocou=0;
    for(i=0;i<9;i++){
      if(v[i]>v[i+1]){
        aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
        trocou=1;
      }
    }
  }while(trocou==1);
  do{
    trocou=0;
    for(i=0;i<9;i++){
      if(w[i]>w[i+1]){
        aux=w[i];
        w[i]=w[i+1];
        w[i+1]=aux;
        trocou=1;
      }
    }
  }while(trocou==1);

  for(i=0;i<10;i++){
    z[i]=v[i];
  }
  for(i=0;i<10;i++){
    z[i+10]=w[i];//+10 para por na posição certa
  }

  trocou=1;
  do{
    trocou=0;
    for(i=0;i<19;i++){
      if(z[i]>z[i+1]){
        aux=z[i];
        z[i]=z[i+1];
        z[i+1]=aux;
        trocou=1;
      }
    }
  }while(trocou==1);

  printf("Vetor ordenado:");
  for(i=0;i<20;i++){
    printf("%d ",z[i]);
  }
}