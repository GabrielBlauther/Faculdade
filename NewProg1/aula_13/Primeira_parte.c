#include <stdio.h>
#include <stdlib.h>

 char * gera_sobrenome(char *nome){
    int t,p,i ,k;
    for(t=0; nome[t]; t++){
        if(nome[t] == ' '){
            p = t;
        }
    }
    t = t-p; //para saber de onde começa e aonde vai o sobrenome p tem o ultimo espaço dai faz aonde le parou em \0 - o p
    char *s = (char *) malloc(t* sizeof(char));
    //char s[t];
    if(s != NULL){
        for(k=0, i=p+1; nome[i]; k++,i++){//p+1 por que p é o caractere espaço 
            s[k] = nome[i];
        }
        s[k]= '\0';
    }
    return s;
}

int main(){
    //char nome[]= "Yo Li";//sem tamanho, compilador calcula caracter por caracter para saber o tamanho da string(vetor)
    //nome = "Yo Li"; //forma errada, e como é vetor não podemos fazer assim pois ele é um vetor, em suma temos que adicionar posição por posição.
    char nome[100];
    int i;
    for(i=0; i < 5; i++){
        printf("Digite o nome: \n");
        gets(nome);
        char *sob = sobrenome(nome);
        if ( sob ){
            printf("%s\n",sob);
            free(sob);
        }
    }
    
    char *sob = gera_sobrenome(nome);//se eu retorno na fução um ponteiro logo quem recebe tem que ser um ponteiro
    if(sob){ // poderia por assim : sob != NULL, mas como isso sob = NULL equivale a falso podemos por só sob;
        printf("%s\n", sob);
    }
    free(sob);
}