/*
1) Faça uma função que receba uma string com valores inteiros separados por vírgulas e 
retorne um vetor com esses valores. A função implementada deverá obrigatoriamente seguir 
o protótipo que é definido abaixo.

int * separa(char str[])

Exemplo:

String	Vetor
“10,15,245,11,5,1243”  	
10	15	245	11	5	1243
Faça ainda o programa principal que leia a string e chame a função implementada.
 Após, esse programa deverá escrever o vetor com todos os valores retornados.

OBSERVAÇÃO: não é permitida a utilização de funções de manipulação de strings.
*/
#include <stdio.h>
#include <stdlib.h>

int * separa(char str[]){
    int i;
    int cont=1;
    int num=0;
    for(i=0;str[i];i++){
        if(str[i]==','){
            cont++;
        }
    }
    int *vet_aux = (int *) malloc(cont * sizeof(int));
    cont=0;
    if(vet_aux){
        for(i=0;str[i];i++){
            if(str[i] >= '0' && str[i] <= '9'){
                num=num*10 + (str[i] - '0');
            }
            if(str[i+1] == ',' || str[i+1] == '\0'){
                vet_aux[cont++]=num;
                num=0;
            }
        }
    }else{
        return 0;
    }
    return vet_aux;
}

int main(){
    char str[] = "10,15,245,11,51,243";

    int i;
    int cont=1;
    for(i=0;str[i];i++){
        if(str[i]==','){
            cont++;
        }
    }
    int *vet_int = separa(str);

    if(vet_int){
        for(i=0; i< cont; i++){
            printf("%d\n",vet_int[i]);
        }
        free(vet_int);
    }
}