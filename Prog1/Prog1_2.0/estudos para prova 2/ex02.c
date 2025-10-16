#include <stdio.h>

int main(){
  int total=500,turmas,i,j,qntdAlunos;
  float nota,menorNota=10,maiorNota=0,acumuladora=0,media=0,acumuladora_turmas=0;// o pulo do gato é nas variaveis menorNota e maiorNota, as quais precisam ter algum valor para podermos comparalas com as proximas notas,
                                                                                 //sendo assim a ideia é iniciar as variaves sendo a maior com a nota mais baixa possivel que é 0 e a menor nota com 10 pois a nossa logica do if é para substituir as notas

  //Devemos iniciar o programa com um for levando em conta que sabemos a quantidade de turmas
  for(j=0;j<total;j++){//Este for le-se "Para j = 0 enquanto j for menor que o total(total de turmas) devesse somar +1 no j (j++)"
    printf("Digite quantos alunos tem na sala: ");
    scanf("%d", &qntdAlunos);
    //aqui zeramos a variavel que acumula as notas pois ela só deve contar as notas de cada turma então quando começar outra turma precisamos que ela seja zerada
    acumuladora=0;
    for(i=0;i<qntdAlunos;i++){// le-se para i = 0 enquanto i for menor que a quantidade de alunos i recebe +1 (i++)
      printf("Digite a nota do %dº aluno: ", i+1);//pedimos a nota e botamos ela na variavel nota
      scanf("%f",&nota);
      acumuladora+=nota;//aqui quando usamos += estamos somando o valor da variavel com a varaivel nota ou seja, com = a gente muda o valor da variavel, com += a gente soma os valores
      if(nota>maiorNota){//aqui como a maior nota inicia com 0 qualquer nota sera a maior, assim garantimos que quando rodar pela primeira vez a nota ira entrar nas variaveis
        maiorNota=nota;
      }
      if(nota<menorNota){//aqui seguimos na mesma logica
        menorNota=nota;
      }
    }
    acumuladora_turmas+= acumuladora / qntdAlunos; // note que botei a variavel que acumula as medias das turmas fora do for, porque a ideia é fazer a media só depois de processar todas as notas de cada turma
  }
  media= acumuladora_turmas/total;// após todo processamento de dados, quando o for completar seus 500 ciclos, nos temos todas as medias somadas dentro da variavel acumuladora_turmas e por fim, fizemos a media, como sabemos que a quantidade total é 500 nos dividimos um pelo outro tendo a media
  printf("Média geral das turmas: %2.f",media);
  printf("Maior nota entre todos os alunos: %2.f",maiorNota);
  printf("Menor nota entre todos os alunos: %2.f",menorNota);
}