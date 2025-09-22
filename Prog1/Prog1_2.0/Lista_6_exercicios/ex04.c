/*
Exercício 04) Você deve fazer um programa em C que calcule a
tabuada. O usuário deverá informar o intervalo dos valores que ele quer que
sejam calculadas as tabuadas. Este intervalo pode ser lido em 2 variáveis. Se o
usuário digitar 4 e 90 o programa precisa fazer a tabuada do 4 até o 90.
Lembrando que para cada um desses números precisa fazer até 10. Se o usuário
digitar 1 e 200 o programa faz a tabuada do número 1 até o 200. Dica: precisa
usar um laço de repetição dentro de outro laço de repetição. Exemplo do
resultado esperado:
*/

#include <stdio.h>

int main (){
    
    int i,j,num,qntd;

    printf("Digite o numero da tabuada: ");
    scanf("%d",&num);
    printf("Digite até quanto a tabuada ira: ");
    scanf("%d",&qntd);

    for(j=0;j<=num;j++){
        printf("\nTABUADA DO %d\n",j);
        for(i=0;i<=qntd;i++){
            printf("%d x %d = %d\n",j,i,j*i);
        }
    }
}