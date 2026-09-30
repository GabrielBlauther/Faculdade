#include <stdio.h>

#define N 100

int tamanho(char str[N])
{
    int i;
    for(i=0;str[i];i++);
    printf("\n%d\n", i);
    return i ;

}
int main()
{
    char str[N];
    int i;

    printf("Digite o valor: \n");
    scanf("%s", str);

    tamanho(str);

    for(i =0;str[i]; i++){
        printf("%d ", str[i] - '0' ); //valor da tabela ascii de '0' é 48, diminuimos o caracter do vetor str e obteremos o valor numérico.
    }
}