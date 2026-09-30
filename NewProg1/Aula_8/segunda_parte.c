// transformar binarios em número e ou caracter

#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 100

int tamanho(char str[N])
{
    int i;
    for(i=0;str[i];i++);
    printf("\n%d\n", i);
    return i ;

}
int bin2dec (char str[N])
{
    int i, expo,n=0;
    for(i=0, expo = strlen(str)-1; str[i]; i++, expo-- ){
        n= n + (str[i] - '0') * pow(2, expo);
    }
    return n;

}
int main()
{
    char str[N];
    int i;

    printf("Digite o binário: \n");
    scanf("%s", str);

    tamanho(str);

    printf("valor em decimal %d ", bin2dec(str) );
}