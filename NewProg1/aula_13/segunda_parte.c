#include <stdio.h>
#include <stdlib.h>

 char * gera_sobrenome(char *nome){
    int t,p,i ,k;
    for(t=0; nome[t]; t++){
        if(nome[t] == ' '){
            p = t;
        }
    }
    char *s= &nome[p+1]; // s recebe o endereço de nome na posição p+1 
    printf("%c", *s);
    return s;
}

int main(){

    char nome[] = "yo li";
    int i;
    char *sob = gera_sobrenome(nome);
    for(i=0; i < 5; i++){
        printf("Digite o nome: \n");
        gets(nome);
        char *sob = sobrenome(nome);
        if ( sob ){
            printf("%s\n",sob);
        }
    }
    free(sob);
}