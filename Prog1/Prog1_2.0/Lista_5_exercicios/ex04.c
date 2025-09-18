/*
Exercício 04) Uma forma de realizar a divisão entre dois números é
através de sucessivas operações de subtração. Nesta forma de cálculo, o
quociente da operação de divisão pode ser obtido subtraindo-se o divisor do
dividendo. Da diferença, subtraímos novamente o divisor e assim
sucessivamente até que a diferença seja menor do que o divisor. A quantidade
de subtrações realizadas será o quociente.
*/

#include <stdio.h> 

int main(){
    int divisor,dividendo,conta,produto,cont=0;

    printf("Digite o valor do divisor(diferente de zero): ");
    scanf("%d",&divisor);
    printf("Digite o valor do dividendo: ");
    scanf("%d",&dividendo);

    if(divisor != 0){
        while(divisor >= dividendo){
            printf("\n %d - %d = ",divisor,dividendo);
            divisor -= dividendo;
            printf("%d",divisor);
            cont++;
        }
        printf("\n o resultado é %d",cont);
    }
}