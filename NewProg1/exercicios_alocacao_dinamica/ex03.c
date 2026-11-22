/*
3) Implemente a função 

char *ultimo_nome(char *nome_completo)

que recebe como parâmetro uma string  com o nome completo de uma pessoa e retorna uma 
string alocada dinamicamente com o último nome encontrado. A string alocada deverá ter 
o tamanho exato para comportar os caracteres do último nome, além do caractere nulo (‘\0’).

Faça um programa que leia 5 strings com os nomes e mostre os últimos nomes, um por linha. Por exemplo, para as entradas

Carlos Alberto Silva
Sebastião Lazaroni
Carlos Alberto Sant’ana
Mário Jorge Lobo Zagallo
Vanderlei Luxemburgo
o programa deve produzir a seguinte saída

Silva
Lazaroni
Sant’ana
Zagallo
Luxemburgo
*/

#include <stdio.h>
#include <stdlib.h>
#define N 100

char *ultimo_nome(char *nome_completo) {
    int i,j,cont=0;

    //tamanho da string: 
    for(i = 0; nome_completo[i];i++);
    
    //tamanho do sobrenome
    for(j=i; nome_completo[j-1] != ' ';j-- ){cont++;}
    
    ///printf("tamanho do cont: %d\n\n", cont);
    
    //Alocando o tamanho do sobrenome a um pointer
    char *s = (char *) malloc(cont * sizeof(char));
    
    int sobrenome = i - cont;

    ///printf("onde inicia o sobrenome: %d", sobrenome);

    for(i=sobrenome, j=0;nome_completo[i];i++,j++){
        s[j]=nome_completo[i];
    }
    s[j]= '\0';
    return s;

}

int main(){
    char str[N];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Digite o seu nome completo: ");
        gets(str); 
        char *sob = ultimo_nome(str);
        if (sob){
            printf("\n Sobrenome: %s\n", sob); 
            free(sob);
        }
    }
}