/*11) (00003250) Desenvolva um programa em C que leia, para 5 candidatos a deputado, o seu cadastro.
Leia, a seguir, um número não determinado de votos (termina ao ser digitado 0) e escreva ao final o
cadastro e número de votos de cada candidato (em ordem crescente de cadastro). Escreva também, ao
final, o número de votos nulos (ou seja, votos que não são iguais ao cadastro de nenhum candidato).*/

#include <stdio.h>

int main(){
int i,cont,candidatos[5],votos,aux,trocou,nulo=0,num_votos[5];

  for(i=0;i<5;i++){
    cont=0;
    printf("Digite o cadastro do %dº deputado: ",i+1);
    scanf("%d",&candidatos[i]);
    while(votos!=0){
      printf("você vota nele? Para sim digite 1, se não digite não, caso nulo digite 2, (parar digite 0): ");
      scanf("%d",&votos);
      if(votos==1){
        cont++;
      }
      else if(votos==2){
        nulo++;
      }
      else if(votos==0){
        break;
      }
      }
    num_votos[i]=cont;
  }
  trocou=1;
  do{
    trocou=0;
    for(i=0;i<4;i++){
      if(candidatos[i]>candidatos[i+1]){
        aux=candidatos[i];
        candidatos[i]=candidatos[i+1];
        candidatos[i+1]=aux;
        aux=num_votos[i];
        num_votos[i]=num_votos[i+1];
        num_votos[i+1]=aux;
        trocou=1;
      }
    }
  }while(trocou==1);

  printf("candidatos em ordem crescente e seus votos: ");

  for(i=0;i<5;i++){
    printf("candidato: %d\n quantidade de votos: %d",candidatos[i],num_votos[i]);
  }
  printf("Total de votos nulos: %d",nulo);
}