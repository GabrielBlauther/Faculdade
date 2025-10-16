
#include <stdio.h>
int main(){
  int num_1=0, num_2=0, num_3=0,cont=0,cont_2=0,rodada = 1,acerto;
  while(cont < 3){
    printf("\nRodada %d\n",rodada);
    rodada++;
    printf("\nDigite\n1 se o candidato A acertou\n2 para o candidato B\n3 para o candidato C\n0 se nenhum acertou: ");
    scanf("%d",&acerto);

    if(acerto == 0){
      cont++;
      cont_2++;
    }else if(acerto == 1){
      num_1++;
      cont=0;
    }else if(acerto == 2){
      num_2++;
      cont=0;
    }else{
      num_3++;
      cont=0;
    }
    if(num_1 == 5 || num_2 == 5 || num_3 == 5){
      break;
    }
  }

  printf("Numero de acertos do candidato A: %d\n", num_1);
  printf("Numero de acertos do candidato B: %d\n", num_2);
  printf("Numero de acertos do candidato C: %d\n", num_3);
  printf("Total de vezes que os candidatos erram: %d\n",cont_2);
  if(cont == 3 && num_1==0 && num_2==0 && num_3==0){
    printf("Nenhum participante pontuou");
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