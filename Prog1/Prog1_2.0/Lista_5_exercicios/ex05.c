/*| Exercício 05) Dois números naturais possuem divisores comuns. Por
exemplo, os divisores comuns dos números naturais 12 e 20 são 1, 2 e 4. Dentre
estes divisores, 4 é o maior. O maior divisor comum de dois ou mais números é
chamado de máximo divisor comum (MDC). Neste exemplo, o máximo divisor
comum de 12 e 20 é 4, ou seja, o MDC(12,20) = 4. Pode-se citar como outros
exemplos:
MDC (6,12) = 6
MDC (12,18) = 6
MDC (20,24) = 4
MDC (12,20,24) = 4
MDC (6,12,15) = 3
Desenvolva um programa em C que solicite ao usuário informar dois números
naturais. O programa em C deverá calcular e mostrar na tela o MDC destes
números.*/

#include <stdio.h>

int main (){
    int n1, n2,cont=1,divisor=0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);

    while(n1 > cont && n2 > cont){
        cont++;
        if(n1%cont==0 && n2%cont==0){
            if(divisor < cont){
                divisor=cont;
            }
        }
    }
    printf("O MDC de (%d,%d) é : %d",n1,n2,divisor);
}