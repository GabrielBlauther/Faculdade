#include <stdio.h>
#include <stdlib.h> 
#define N 4

struct data{
    int d,m,a;

}; typedef struct data DATA;

struct pessoa{
    int cod;
    char nome[50];
    DATA nasc;
};
typedef struct pessoa PESSOA;
/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
 
void escreve(PESSOA *v, int n){
    int i;
    for(i=0; i<n ; i++){
        printf("\nCod: %d Nome: %s Nasc: %d %d %d\n", v[i].cod, v[i].nome,v[i].nasc.d, v[i].nasc.m, v[i].nasc.a);
    }
}
/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

int maior_idade(DATA nasc, DATA atual){//passamos a estrutura 
    int idade = atual.a - nasc.a;
    if((nasc.m > atual.m) || (nasc.m == atual.m && nasc.d > atual.d)){
        idade--;
    }
    int m= idade >= 18 ? 1:0;
    return m;
}

/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/

PESSOA * maiores(PESSOA *v, int n, DATA atual, int *t){//atual é uma copia
    PESSOA *m = NULL;
    int i,k;
    m = (PESSOA *)malloc(n* sizeof(PESSOA));
    if(m != NULL){
        k=0;
        for(i=0; i< n; i++){
            if(maior_idade(v[i].nasc, atual)){ //v[i].nasc passa a estrutura completa
                m[k++] = v[i];
            }
        }
        *t=k;
        m = (PESSOA *) realloc(m,k*sizeof(PESSOA));
    }
    return m;
}

/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/


int main(){
    DATA atual = {24, 11, 2026};
    int t;
    PESSOA p[N] = 
    {
        {1,"testeee 1", {24,11,2018}},
        {2,"teste 2 teste 2", {25,11,2008}},
        {3,"teste 3", {25,11,2008}},
        {4,"teeeeeesteeeee 4", {25,11,2007}},
    };
    //escreve(p,4);
    PESSOA *m= maiores(p,4,atual, &t);
    if(m){
        escreve(m,t);
        free(m);
    }
}