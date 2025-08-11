/*1) (3,5 PONTOS) Em uma instituição de ensino, os alunos só podem se matricular na disclina de
“Práticas de Laboratório” caso caso também estejam matriculados nas disciplinas de “Física” e em
“Química”. Fça um programa em C que escreva os cadastros (inteiro) dos alunos que estão matriculados na
“Práticas de Laboratório”, mas não estão matriculados simultaneamente nas disciplinas de “Física” e
“Química”. Considere que os vetores possuem no máximo 50 alunos, e que os cadastros devem ser lidos
até ser digitado um cadastro menor ou igual a zero.*/

#include <stdio.h>

int main(){
  int vetor[20],aux,i,fisica[20],quimica[20],cont=0,praticas[20],cont_2=0;

  //entrada de dados
  for(i=0;i<20;i++){
    printf("Digite o numero do cadastro: ");
    scanf("%d",&vetor[i]);
    if(vetor[i]==0)
      break;
    printf("Digite 1 se estiver matriculado em quimica, 0 se não estiver: ");
    scanf("%d",&quimica[i]);
    printf("Digite 1 se estiver matriculado em fisica, 0 se não estiver: ");
    scanf("%d",&fisica[i]);
    cont++;
  }

  for(i=0;i<cont;i++){
    if(quimica[i]==1 && fisica[i]==1){
      praticas[i]=vetor[i];
      cont_2++;
    }
  }
  printf("cadastros matriculados foram: ");
 for(i=0;i<cont_2;i++){
  printf("%d ",praticas[i]);
 }

}