#include <stdio.h>

int main(){
  int codigo_aluno=0,maiores_acertos=0;
  float menores_acertos=50,media_acertos_40_50=0,nota,media_total=0,cont_media=0,cont_40_50=0;

  while(codigo_aluno != -1){
    // Entrada de dados
    printf("Digite o codigo do alunos(-1 para parar): ");
    scanf("%d",&codigo_aluno);
    if(codigo_aluno != -1){
      printf("Digite a quantidade de acertos do aluno: ");
      scanf("%f",&nota);

      // Processamento de dados
      media_total+=nota;
      cont_media++;

      if(nota<menores_acertos){
        menores_acertos=nota;
      }
      if(nota>=35){
        maiores_acertos++;
      }
      if(nota >= 40 && nota <= 50){
        media_acertos_40_50+=nota;
        cont_40_50++;
      }
    }
  }
  // Saída de dados
  if(cont_40_50>0){
    printf("Média de acertos do grupo cujos acertos estão no intervalo [40,50]: %.2f\n",media_acertos_40_50/cont_40_50);
  }else{
    printf("Nenhum aluno teve notas igual ou maior que 40.\n");
  }
  if(maiores_acertos>0){
    printf("A quantidade de alunos com notas acima de 35 foi de %d\n",maiores_acertos);
  }else{
    printf("Não houve notas maiores ou iguais a 35\n");
  }
  printf("Menor número de acertos %.0f (%.2f porcento)\n",menores_acertos,(menores_acertos*100)/50);
  printf("Média geral de acertos: %.2f",media_total/cont_media);
}