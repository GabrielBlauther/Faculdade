/*
A ideia principal deste programa é que a gente saiba como sair de um loop while, sendo assim o exercicio nos passa as seguintes regras:
se o candidato a ou b ou c acertarem eles ganham 1 ponto o primeiro que acertar 5 ganha, se todos errarem 3 vezes consecutivas nos deveremos encerrar o programa
o pulo do gato vem de que logicamente devemos notar que se algum candidato acertar devemos zerar a contagem da variavel quem conta os 3 erros consecutivos
devemos lembrar que o programa sempre roda de cima para baixo, sendo assim se ele esta avaliando um ponto no meio do programa, o que acontece depois dele só vai alterar
o codigo quando chegar na vez dele, sabendo isso devemos organizar sempre a ordem que os eventos acontecem, devemos pensar como uma receita de bolo, se  não seguirmos a ordem
o bolo nao bomba.
*/
#include <stdio.h>
int main(){
  int num_1=0, num_2=0, num_3=0,cont=0,cont_2=0,rodada = 1,acerto;
  while(cont < 3){
    printf("\nRodada %d\n",rodada);
    rodada++;
    printf("\nDigite\n1 se o candidato A acertou\n2 para o candidato B\n3 para o candidato C\n0 se nenhum acertou: ");
    scanf("%d",&acerto);
    //cada if aqui esta tentando entender qual numero foi digitado
    if(acerto == 0){//if = "Se", Se acerto conter o numero 0 (cont)amos +1 nos erros consecutivos e +1 nos erros gerais
      cont++;
      cont_2++;/*esta variavel não sera zerada pois precisamos contar quantos erros os participantes tiveram, lembrando que não é 3 erros que param o programa
      são 3 erros CONSECUTIVOS*/
    }else if(acerto == 1){//Note que se ele achar o numero 1 contamos na variavel num_1 (candidato A)
      num_1++;
      cont=0;//zeramos pois nesta rodada houve pontuação
    }else if(acerto == 2){
      num_2++;
      cont=0;
    }else{
      num_3++;
      cont=0;
    }
    if(num_1 == 5 || num_2 == 5 || num_3 == 5){// aqui fizemos a segunda validação, que é: se algum candidato fizer 5 pontos devemos finalizar o programa
      break;
    }
  }

  printf("Numero de acertos do candidato A: %d\n", num_1);
  printf("Numero de acertos do candidato B: %d\n", num_2);
  printf("Numero de acertos do candidato C: %d\n", num_3);
  printf("Total de vezes que os candidatos erram: %d\n",cont_2);
  if(num_1==0 && num_2==0 && num_3==0){//Aqui tratamos a seguinte hipotese, se no começo do programa os participantes errarem as 3 primeiras questões o programa encerra e ninguem pontua
    printf("Nenhum participante pontuou");  // Assim sabemos que ninguem pontuou
  }
  if(num_1 == 5){
    printf("Participante A é o vencedor");
  }
  if(num_2 == 5){
    printf("Participante B é o vencedor");
  }
  if(num_3 == 5){
    printf("Participante C é o vencedor");
  }
}