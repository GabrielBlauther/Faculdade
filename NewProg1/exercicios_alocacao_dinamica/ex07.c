/*
7) Crie uma função que receba como parâmetros dois vetores de inteiros: 
x1 e x2 e as suas respectivas quantidades de elementos: n1 e n2. 
A função deverá retornar um ponteiro para um terceiro vetor, x3, 
alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro 
qtd para retornar o tamanho de x3. Assuma que em um mesmo  vetor não haverá valores repetidos,
mas um valor contido em x1 poderá também estar contido em x2.  Nesse caso, apenas uma
ocorrência deve ser colocada em x2.   Sendo x1={1,3,5,6,7} e x2={1,3,4,6,8}, x3 irá 
conter {1,3,5,6,7,4,8}. O protótipo da função é dado por:

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd)
*/

#include <stdio.h>
#include <stdlib.h>


int repetidos(int *x1,int *x2, int n1,int n2){
    int i, j;
    int cont=0;
    for( i = 0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(x1[i]==x2[j]){
                cont++;
            }
        }
    }
    return cont;
}

int* ordena(int *x3, int *qtd){
    int i, j,aux;

    for(i = 0 ; i < *qtd; i++){
        for(j = i + 1; j < *qtd; j++){
            if(x3[i] > x3[j]){
                aux = x3[i];
                x3[i] = x3[j];
                x3[j] = aux;
            }
        }
    }
    return x3;
}

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    int i,j,cont=0,repete=0;
    int *x3 = (int *) malloc(((n1+n2) - repetidos(x1,x2,n1,n2))* sizeof(int));
    
    //adicionando os valores de x1;
    for(i=0;i < n1; i++){
        x3[cont++] = x1[i];
    }

    for(i = 0; i<n2; i++){
        repete=0;
        for(j=0;j<n1;j++){
            if(x2[i] == x3[j]){
                repete=1;
            }
        }
        if(!repete){
            x3[cont++]=x2[i];
        }
    }
    *qtd = cont;
    //printf("\ndentro da func valor de qtd: %d \n", *qtd);
    x3 = ordena(x3, qtd);
    return x3;
}



int main(){

    int x1[5]={1,3,5,6,7};
    int x2[5]={1,3,4,6,8};
    int n1= 5;
    int n2= 5;
    int qtd;
    
    int *x3 = uniao(x1,x2,n1, n2, &qtd);

    //printf("valor de qtd: %d ", qtd);
    for(int i = 0; i < qtd; i++){
        printf(" %d ", x3[i]);
    }
}