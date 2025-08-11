/*O conselho diretor da empresa tecnofab resolveu dar uma bonificação como forma de reconhecimento da dedicação e do bom trabalho de seus funcionarios.
 para tanto, todos os funcionarios que atingiram suas metas e não tiveram faltas registradas no ano receberão o 14º salario.
  Foi informado que 20 funcionarios cumpriram suas metas e 15 não faltaram nenhum dia do ano. Escreva um programa em linguagem C que:
  - leia as 20 matiruculas dos funcionarios que cumpriram suas metas e armazeneas em um vetor.
  - leia as 15 matriculas dos funcionarios que não tiveram faltas e armazene-as em outro vetor.
  -gere como resultado um novo vetor, as matriculas dos funcionarios que estão presentes em ambos os vetores, ou seja, que cumpriram metas e não faltaram.*/

 #include <stdio.h>

 int main(){

  int sem_faltas[15],metas[20],i,j,aux,trocou,premio[20],cont=0;

  printf("Parabens voces não faltou nenhum dia!!\n");
  for(i=0;i<20;i++){
    printf("Digite o numero da sua matricula: ");
    scanf("%d",&metas[i]);
  }
  printf("\nParabens voces não tiveram nenhuma falta!\n");
  for(i=0;i<15;i++){
    printf("Digite o numero da sua matricula: ");
    scanf("%d",&sem_faltas[i]);
  }

  cont=0;
  for(i=0;i<20;i++)
    for(j=0;j<15;i++){
      if(metas[i]==sem_faltas[j]){
        premio[cont]=metas[i];
        cont++;
        break;
      }
    }
  printf("As matriculas premiadas são: ");
  for(i=0;i<cont;i++){
    printf(" %d",premio[i]);
  }
}
