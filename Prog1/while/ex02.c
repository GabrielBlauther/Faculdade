/*2) Desenvolva um programa em C que solicite ao usuário informar dois valores inteiros correspondentes
ao código do candidato ao Senado e sua respectiva votação. O programa em C deverá solicitar estes
valores até que o código digitado seja 0. Quando o código digitado for 0, a votação do candidato não
deverá ser solicitada. O programa em C deverá mostrar na tela os códigos e as votações dos dois
senadores eleitos, ou seja, os dois candidatos com o maior número de votos.
*/

#include <stdio.h>

int main(){
  int cod=1,vot=0,sen1=0,sen2,maior1=0,maior2=0;

  while(cod!=0){

    printf("Digite o codigo do senador:\n ");
    scanf("%d",&cod);

    if(cod == 0) break;

    printf("Digite a quantidade de votos do senador %d: ",cod);
    scanf("%d",&vot);

    if(vot>maior1){
      maior2=maior1;
      maior1=vot;
      sen2=sen1;
      sen1=cod;
    }
    else if(vot>maior2){
      maior2=vot;
      sen2=cod;
    }
  }
  printf("\nO senador com maior numero de votos foi %d com %d votos\n",sen1,maior1);
  printf("\nO senador com segundo maior numero de votos foi %d com %d votos\n",sen2,maior2);

  return(0);
}