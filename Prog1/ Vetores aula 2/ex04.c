/*4) Desenvolva um programa em C que solicite ao usuário informar 30 valores inteiros, que pertençam
ao intervalo entre 1 a 10 (inclusive), e armazene estes valores em um vetor. Se o usuário informar um
número que não pertença a este intervalo, o programa em C deverá ficar solicitando novos valores até
que o usuário digite um valor no intervalo solicitado. Após ler e armazenar os 30 números com valores
entre 1 e 10 dados no vetor, o programa em C deverá verificar quantos elementos do vetor estão
repetidos e quantas vezes cada um se repete. Após o programa em C deverá mostrar na tela um
relatório com estes dados. É importante ressaltar que os números só podem aparecer uma vez, não
podendo aparecer números duplicados. */

#include <stdio.h>

int main(){
  int i,v[30],j,cont[11];
  //inicilizar vetor contador
  for(i=0;i<11;i++) cont[i]=0;
  //leitura dos valores no vetor
  printf("Digite 30 valores: ");
  for(i=0;i<30;i++){
    do{
      scanf("%d",&v[i]);
    }while (v[i]<0 || v[i]>10);
    cont[[i]]++;
  }
}