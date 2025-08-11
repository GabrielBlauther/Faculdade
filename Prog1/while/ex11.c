/*11) Desenvolva um programa em C que solicite ao usuário informar o número inteiro referente a
matrícula de um aluno e três valores reais que correspondam as três provas do aluno. O programa em
C deverá calcular a nota final utilizando a média harmônica. Caso alguma das notas seja 0 (zero), a
média deve receber 0 (zero). Se o aluno obteve uma média abaixo de 6.0 e AINDA PUDER OBTER
média igual ou superior a 6.0, o programa em C deve ler uma quarta nota, correspondente a prova de
recuperação, e substituir a menor das três notas pela nota da recuperação, recalculando a média. No
caso do aluno ter obtido média inferior a 6.0, uma forma de verificar se ele pode alcançar média 6.0
através da prova de recuperação é substituindo a menor nota por 10 e verificando se a MH resultante é
igual ou superior a 6.0.
 Após o cálculo, o programa em C deverá mostrar na tela a o número de matrícula, a média final
e o conceito obtido:
O programa em C deverá receber estes valores várias vezes, para um número não determinado
de alunos. O programa em C deverá encerrar a leitura dos dados quando o usuário informar 0 na
matrícula do aluno.
1/MH = (1/a + 1/b) /2 ou MH = 2ab / (a + b)*/

#include <stdio.h>

int main(){
  int matricula;
  float prova1,prova2,prova3,media_harmonica,menor_nota;

  printf("Digite o numero da matrícula (0 para parar): \n");
  scanf("%d",&matricula);

  while (matricula != 0){

    printf("Digite a primeira nota: ")
    scanf("%f"&prova1);
    printf("Digite a segunda nota: ")
    scanf("%f"&prova2);
    printf("Digite a terceira nota: ")
    scanf("%f"&prova3);

    menor_nota = prova1;
    if(prova2< menor_nota) {
      menor_nota = prova2;
    }
    if(prova3 < menor_nota) {
      menor_nota = prova3;
    }

    if(prova1 != 0 && prova2 != 0 && prova3 != 0) {
      media_harmonica = 3.0 / ((1.0 / prova1) + (1.0 / prova2) + (1.0 / prova3));
    }
    if(media_harmonica < 6.0){
      menor_nota = 10;


    }
  }
}