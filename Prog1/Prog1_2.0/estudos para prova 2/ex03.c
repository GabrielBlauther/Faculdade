#include <stdio.h>

int main(){
  int qntdNum,num,maiorPar=0,menorPar=10,i,num_novo,cont=0,num_original,maiorParTodos=0;
  float percentual,totalPar=0,cont_total_numeros=0;

  printf("Quantos numeros deseja analisar: ");
  scanf("%d",&qntdNum);

  for(i=0;i<qntdNum;i++){

    printf("\nDigite o %dº numero: ",i+1);
    scanf("%d",&num);
    num_original=num;
    cont=0;
    maiorPar=0;
    while(num>0){
      cont_total_numeros++;
      num_novo= num % 10;
      num/=10;
      if(num_novo%2==0){
        cont++;
        totalPar++;
        if(num_novo > maiorPar){
          maiorPar=num_novo;
        }
        if(num_novo < menorPar){
          menorPar = num_novo;
        }
      }
    }
    if(maiorPar>maiorParTodos){
      maiorParTodos=maiorPar;
    }
    if(cont>0){
      printf("\nO número %d tem %d digito(s) par(es), sendo o maior digito %d",num_original,cont,maiorPar);
    }else{
      printf("\nO número %d tem %d digito(s) par(es)",num_original,cont);
    }
  }
  printf("\nO total de digitos pares pares em todos os números é: %3.f",totalPar);
  percentual = (totalPar*100.0)/cont_total_numeros;
  printf("\nO percentual de dígitos pares é de %.2f  ",percentual);
  printf("\nMenor dígito par: %d",menorPar);
  printf("\nMaior dígito par: %d",maiorParTodos);

}