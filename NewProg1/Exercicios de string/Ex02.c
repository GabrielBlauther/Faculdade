/*
2) Fazer um programa que leia uma string e a partir desta gere uma nova duplicando cada caracter da string original. 
Escreva a nova string. Por exemplo, para as strings abaixo, o programa deverá escrever:

"OI" => "OOII"
"PROVA 1" => "PPRROOVVAA 11a".
*/

#include <stdio.h>

#define N 100

int duplica(char str1[N], char str2[N])
{
    int i, j=0;

    for(i=0;str1[i];i++){
        str2[j++] = str1[i];
        str2[j++] = str1[i];
    }

    str2[j] = '\0';

}

int main(){
    char str1[N], str2[N];

    printf("Digite uma palavra: ");
    gets(str1);

    duplica(str1,str2);

    printf("%s", str2);
}