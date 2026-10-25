/*
6) Faça um programa que leia uma string com uma frase com espaços em branco extras. 
Considerar que a string pode apresentar também espaços extras no início. 
O programa deverá gerar e escrever um nova string com todos os espaços em branco extras removidos. 
Por exemplo:
String de entrada            String de Saída
“   Sou uma    string  “	 “Sou uma string“
 “Sou     uma    string“   	 “Sou uma string“
*/

#include <stdio.h> 
#define N 100

void corrigir_frase(char str[N]){
    int i,cont=0;
    char frase_correta[N];

    for(i = 0; str[i]; i++){
        
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ){
            frase_correta[cont++]= str[i];
            if(str[i+1]==' '){
                frase_correta[cont++]= ' ';
            }
        }  
    }
    frase_correta[cont+1]= '\0';
    printf("%s", frase_correta);
}

int main(void){ 
    char frase_toda_errada[N];

    printf("Digite: ");
    gets(frase_toda_errada);
    corrigir_frase(frase_toda_errada);
}