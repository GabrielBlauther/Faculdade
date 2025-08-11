/*O conselho diretor da empresa tecnofab resolveu dar uma bonificação como forma de reconhecimento da dedicação e do bom trabalho de seus funcionarios.
 para tanto, todos os funcionarios que atingiram suas metas e não tiveram faltas registradas no ano receberão o 14º salario.
  Foi informado que 20 funcionarios cumpriram suas metas e 15 não faltaram nenhum dia do ano. Escreva um programa em linguagem C que:
  - leia as 20 matiruculas dos funcionarios que cumpriram suas metas e armazeneas em um vetor.
  - leia as 15 matriculas dos funcionarios que não tiveram faltas e armazene-as em outro vetor.
  -gere como resultado um novo vetor, as matriculas dos funcionarios que estão presentes em ambos os vetores, ou seja, que cumpriram metas e não faltaram.*/


#include <stdio.h>

int main(){
  int metas[20],sem_faltas[15],premio[20],cont=0,i,j;

  for(i=0;i<20;i++){
    printf("Digite o numero da matricula: ");
    scanf("%d", &metas[i]);
  }
    for(i=0;i<15;i++){
    printf("Digite o numero da matricula: ");
    scanf("%d", &sem_faltas[i]);
  }

  cont=0;
  for(i=0;i<20;i++){
    for(j=0;j<15;j++){
      if(sem_faltas[j]==metas[i])
      premio[cont]=sem_faltas[j];
      cont++;
      break;
    }
  }
  printf("As matriculas premiadas foram: ");
  for(i=0;i<cont;i++)
    printf(" %d",premio[i]);
}