#include <stdio.h>

int main(){
  int total=500,turmas,i,j,qntdAlunos;
  float nota,menorNota=10,maiorNota=0,acumuladora=0,media=0,acumuladora_turmas=0;
  for(j=0;j<total;j++){
    printf("Digite quantos alunos tem na sala: ");
    scanf("%d", &qntdAlunos);
    acumuladora=0;
    for(i=0;i<qntdAlunos;i++){
      printf("Digite a nota do %dº aluno: ", i+1);
      scanf("%f",&nota);
      acumuladora+=nota;
      if(nota>maiorNota){
        maiorNota=nota;
      }
      if(nota<menorNota){
        menorNota=nota;
      }
    }
    acumuladora_turmas+= acumuladora / qntdAlunos;
  }
  media= acumuladora_turmas/total;
  printf("Média geral das turmas: %2.f",media);
  printf("Maior nota entre todos os alunos: %2.f",maiorNota);
  printf("Menor nota entre todos os alunos: %2.f",menorNota);
}