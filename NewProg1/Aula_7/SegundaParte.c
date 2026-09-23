//Exemplos de char

#include <stdio.h>
#include <stdio_ext.h>// Lib para podermos limpar o enter

#define N 100

void duplica(char str1[N], char str2[N]){
    int i,j=0;
    // Na primeira vez ele entra em 0 e incrementa para um na segunda linha que vai valer 1 e na segunda ao final incrementa e soma mais 1
    for(i=0; i< str1[i] != '\0'; i++){
        str2[j++] = str1[i]; // str2[j++] ele usa o valor atual do j e só na linha de baixo ele vai ter incrementado
        str2[j++] = str1[i];
    }
    str2[j] = '\0';
}

int main(){
    char str1[N], str2[N];
    

    printf("Digite o seu nome: ");
    gets(str1);

    duplica(str1, str2);
    //scanf("%s", str1); desta forma da erro pois o espaço é um digito separador então uma frase ele pega apenas a primeira palavra, por isso usamoso gets()

    printf("%s", str2);    
}