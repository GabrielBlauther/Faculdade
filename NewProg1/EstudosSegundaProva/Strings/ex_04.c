/*
Faça um programa em Linguagem de Programação C que leia uma única string que representando o nome completo de uma pessoa (dividada em nome próprio, nome do meio e nome da família). 
O programa deverá gerar uma nova string com as iniciais dos nomes próprio e do meio (com pontos) e o nome de família completo. 
Por exemplo,  para as entradas abaixo o programa deverá gerar as seguintes strings:
String inicial	             Nova string
Richard Langton Gregory 	 R. L. Gregory
Alan Mathison Turing    	 A. M. Turing
*/

#include <stdio.h>


#define N 100

void muda_nome(char str[N]){
    int i, cont=0,cont_2=0;
    char p_nome,s_nome,ultimo_nome[N];

    for(i = 0; str[i]; i++){
        if(i==0){
            p_nome=str[i];
        }
        if(str[i]==' ' && cont == 0){
            s_nome = str[i+1];
        }
        if(str[i] == ' ' && cont == 1){
            cont_2=i+1;
            break;
        }
        if(str[i]==' '){cont++;}

    }
    cont=0;
    for(i = cont_2; str[i]; i++ ){
        ultimo_nome[cont++]=str[i];
    }
    ultimo_nome[cont]= '\0';
    printf("%c. ",p_nome);
    printf("%c. ",s_nome);
    printf("%s", ultimo_nome);
    
}


int main(void){
    char str[N];

    printf("Digite seu nome: ");
    gets(str);
    muda_nome(str);
}