#include <stdio.h>



struct data{
    int d,m,a;
};
typedef struct data DATA;



struct pessoa {
    int cod;
    char nome[50];
    DATA n;
};
typedef struct pessoa PESSOA;



void escreve(PESSOA *v, int n){// PARA STRUCTS usamos o tipo porque o ponteiro é neste caso do tipo pessoa
    int i;
    for(i=0; i < n; i++){
        printf("Codigo: %d Nome: %s Data: %d %d %d", v[i].cod,v[i].nome,v[i].n.d,v[i].n.m, v[i].n.a);
    }
}



void procura(int cod, PESSOA *v,int n,int *p,PESSOA *pe){
    int i;
    for(i=0; i < n; i++){
        if(v[i].cod == cod){
            *p = i;
            *pe = v[i]; //recebe tudo
        }
    }

}



int main(){
    PESSOA v[4] = 
    { 
        {1, "teste1", {1,11,111}},
        {3, "teste3", {3,33,333}},
        {2, "teste2", {2,22,222}},
        {4, "teste4", {4,44,444}},
    };
    int p;
    PESSOA pe;
    escreve(v,4);
    procura(3,v,4, &p, &pe);
    printf("posicao: %d\n", p);
    printf("Codigo: %d Nome: %s Nasc: %d %d %d\n",pe.cod, pe.nome, pe.n.d, pe.n.m, pe.n.a);
}