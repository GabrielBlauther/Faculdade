/*1) (3,5 PONTOS) Em uma instituição de ensino, os alunos só podem se matricular na disclina de
“Práticas de Laboratório” caso também estejam matriculados nas disciplinas de “Física” e em
“Química”. Faça um programa em C que escreva os cadastros (inteiro) dos alunos que estão matriculados na
“Práticas de Laboratório”, mas não estão matriculados simultaneamente nas disciplinas de “Física” e
“Química”. Considere que os vetores possuem no máximo 50 alunos, e que os cadastros devem ser lidos
até ser digitado um cadastro menor ou igual a zero.*/

#include <stdio.h>

int main(){
  int praticasLab[10],quimica[10],cadastro,fisica[10],i,j,k,achou,naomatriculados[10],cont=0;

  for(i=0;i<10;i++){
    printf("digite o numero da sua matricula se estiver matriculado em praticas de lab:  ");

    scanf("%d",&cadastro);
    if(cadastro > 0){
      praticasLab[i]=cadastro;
    }else{
      break;
    }
  }
   for(i=0;i<10;i++){
    printf("digite o numero da sua matricula se estiver matriculado em quimica:  ");
    scanf("%d",&cadastro);
    if(cadastro > 0){
      quimica[i]=cadastro;
    }else{
      break;
    }
  }
  for(i=0;i<10;i++){
    printf("digite o numero da sua matricula se estiver matriculado em fisica:  ");
    scanf("%d",&cadastro);
    if(cadastro > 0){
      fisica[i]=cadastro;
    }else{
      break;
    }
  }
  for(i=0;i<10;i++){
    achou=0;
    for(j=0;j<10;j++){
      if(praticasLab[i]==quimica[j]){
        for(k=0;k<10;k++){
          if(praticasLab[i]==fisica[k])
          achou=1;
        }
      }
    }
    if(achou==0){
      naomatriculados[cont]=praticasLab[i];
      cont++;
    }
  }
  printf("Alunos não matriculados em ambas materias:\n");
  for(i=0;i<cont;i++){
    printf("%d ",naomatriculados[i]);
  }

}