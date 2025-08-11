/*4) Uma forma de realizar a divisão entre dois números é através de sucessivas operações de subtração.
Nesta forma de cálculo, o quociente da operação de divisão pode ser obtido subtraindo-se o divisor do
dividendo. Da diferença, subtraímos novamente o divisor e assim sucessivamente até que a diferença
seja menor do que o divisor. A quantidade de subtrações realizadas será o quociente. */

#include <stdio.h>
  main(){
    int dividendo,divisor,quoc=0;

    printf("Informe o dividendo: \n");
    scanf("%d",&dividendo);

    printf("Informe o divisor: \n");
    scanf("%d",&divisor);

    while (dividendo>divisor){
      dividendo-=divisor;
      quoc++;

    }

    printf("O quociente da divisao eh: %d\n",quoc);

  }