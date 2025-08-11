/*O processo seletivo da universidade de caxias do sul para o curso de Medicina teve a participação de muitos candidatos nest ano.
para realizar o relatorio final sobre os resultados deste processo, você foi selecionado para escrever um
programa em C que leia o codigo e o numero de acertos de cada um dos participantes que realizaram a prova
(para de ler estes dados quando o codigo digitado for -1 ) ou atingir 100 alunos cadastrados) sabendo que o processo seletivo contou com 50 questões objetivas, determine
a) calcular e exibir a média de acertos entre todos os candidatos
b)ordenar os dados em ordem decrescente de número de acertos, mantendo a associação com o respectivo código do candidato. Em caso de empate no número de acertos
, os candidatos devem ser ordenados em ordem crescente de código
c)imprimir a lista dos 10 alunos com o menor número de acertos (em caso de empate, a escolha pode ser aleatoria entre eles)
d)exibir os códigos dos candidatos cujo numero de acertos esteja no intervalo [35,45], inclusive, e calcular a média de acertos desse grupo */

#include <stdio.h>

int main(){

  int alunos[100],acertos[100],i,j,aux,trocou,cont=0,media=0;

  for(i=0;i<100;i++){
    printf("Digite o  seu cadastro: ");
    scanf("%d",&alunos[i]);
    if(alunos[i] < 0){
      break;
    }
    printf("Digite a quantidade de acertos: ");
    scanf("%d", acertos[i]);
    cont++;
  }

  for(i=0;i<cont;i++){
    media+=acertos[i];
  }

  media/=cont;
  printf("A média de acertos de todos os alunos foi: %d",media);

  trocou=1;
  do{
    trocou=0;
    for(i=0;i<cont-1;i++){
      if(acertos[i]<acertos[i+1]){
        aux= acertos[i];
        acertos[i]=acertos[i+1];
        acertos[i+1]=aux;
        aux=alunos[i];
        alunos[i]=alunos[i+1];
        alunos[i+1]=aux;
        trocou=1;
      }else if(acertos[i] == acertos[i+1] && alunos[i] > alunos[i+1]){
        aux=alunos[i];
        alunos[i]=alunos[i+1];
        alunos[i+1]=aux;
        aux=acertos[i];
        acertos[i]=acertos[i+1];
        acertos[i+1]=aux;
        trocou=1;
      }
    }
  }while(trocou==1);

  printf("Os 10 alunos com menor nota são:\n ");
  for(i=cont-10;i<cont;i++){
    printf(" %d", alunos[i]);
  }
  for(i=0;i<cont;i++){
    if(acertos[i]>=35 && acertos [i]<= 45){
      printf(" %d",alunos[i]);
    }
  }
}