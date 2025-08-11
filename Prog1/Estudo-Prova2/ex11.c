/*O Circuito Mundial de Surfe (WCT) é formado por 34 competidores e 11 etapas.
Em cada etapa a pontuação de cada surfista vai de 0 a 10000 (10000 é a pontuação máxima). Ao final da
temporada, o vencedor será o surfista que atingir a maior pontuação total. A pontuação total é dada pela
soma da pontuação de todas as etapas, sendo que o pior resultado é descartado. Faça um programa em
liguagem C que leia para cada um dos 34 competidores: o código e um conjunto de 11 valores
correspondentes a pontuação de cada etapa. O programa deverá escrever ao final o código do surfista com
maior pontuação, de acordo com o sistema de pontuação que foi descrito anteriormente.*/

#include <stdio.h>

int main(){

  int cod,i,pontuacao,pontuacao_max=0,x,vencedor,pontuacao_valida,menor_pontuacao,soma;
 for(i=1;i<=34;i++){// variavel for que ira repetir 34 vezes
  printf("Digite o codigo deste competidor: ");
  scanf("%d",&cod);
  soma=0;
  menor_pontuacao=10000;
  for(x=1;x<=11;x++){
    printf("Digite a pontuação da %dº etapa: ");
    scanf("%d",&pontuacao);
    soma+=pontuacao;

    if(pontuacao < menor_pontuacao){
      menor_pontuacao = pontuacao;
    }
  }
  pontuacao_valida = soma - menor_pontuacao;

  if(pontuacao_valida>pontuacao_max){
    pontuacao_max = pontuacao_valida;
    vencedor = cod;
  }
}
  printf("O vencedor de codigo %d com %d pontos. ",vencedor,pontuacao_max);
}