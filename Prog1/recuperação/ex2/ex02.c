/*o processo seletivo da universidade de caxias do sul para o curso de medicina teve a participação de muitos candidatos neste ano.
 A prova aplicada aos participantes continha 50 questões objetivas
  e você foi selecionado para elaborar o relatório final relativo aos resultados deste processo seletivo.
 para tanto vc devera escrever um
 programa em C que leia o codigo e o numero de acertos de cada um dos candidatos que realizaram a prova(para de ler se o codigo digitado for-1)
 a) a media de acertos da prova entre todos os candidatos.
 b) o menor numero de acertos e o percentual de aproveitamento para esse resultado
 c)o numero de candidatos com o numero de acertos igual ou superior a 35;
 d) a media de acertos das provas do grupo de candidatos no intervalo de [40,50] */

#include <stdio.h>

int main(){

  int cont=0,cod,media=0,acertos,i,menor=51, percentual=0,maior_35=0,cont_2=0,media_2=0;


  while(1){
    printf("Digite o codigo do aluno:(-1 para parar) ");
    scanf("%d",&cod);
    if(cod == -1)
      break;
    printf("Digite o numero de acertos: ");
    scanf("%d", &acertos);
    cont++;
    if(acertos<menor)
      menor=acertos;
    if(acertos >=35)
      maior_35++;
    if(acertos >= 40 && acertos <=50){
      media_2+=acertos;
      cont_2++;
    }
    media+=acertos;
  }
  media=acertos/cont;
  printf("A media entre todos os alunos foi de: %d",media);

  percentual= (menor*100)/50;

  printf("A media de todos os candidatos é de: %d", media );
  printf("O menor numero de acertos foi de %d com %d porcento de acerto ",menor, percentual);
  printf("O numero de cadidatos com 35 ou mais acertos foi de %d",maior_35);
  printf("A media de acerto dos candidatos no intervalo de [40,50] foi de %d",media_2/cont_2);


}