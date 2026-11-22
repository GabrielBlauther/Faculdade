/*
5) Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas 
respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um 
terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro 
qtd para retornar o tamanho de x3. Assuma que em um mesmo  vetor não haverá elementos repetidos. 
Sendo x1={1,3,5,6,7} e x2={1,3,4,6,8}, x3 irá conter {1,3,6}. O protótipo da função é dado por:

int* interseccao(int *x1, int *x2, int n1, int n2, int* qtd)

*/


#include <stdio.h>
#include <stdlib.h>

int repetidos(int *x1, int *x2, int n1, int n2){
    int cont=0,i,j;
    for(i=0; i < n1; i++){
        for(j=0; j < n2; j++){
            if(x1[i] == x2[j]){
                cont++;
            }
        }
    }
    return cont;
}

int* interseccao(int *x1, int *x2, int n1, int n2, int* qtd){
    int i,j,cont=0;

    *qtd = repetidos ( x1, x2, n1, n2);
    int *x3 = (int *) malloc(*qtd * sizeof(int));    

    for(i=0; i < n1;i++){
        for(j=0; j < n2; j++){
            if(x1[i] == x2[j]){
                x3[cont++] = x1[i];
            }
        }
    }

    return x3;

}


int main(){
    int x1[5] = {1,3,5,6,7};
    int x2[5] = {1,3,4,6,8};
    int n1=5,n2=5, qtd;

    int *x3 = interseccao(x1,x2,n1,n2, &qtd);
    for(int i =0; i < qtd; i++){
        printf("%d ", x3[i]);
    }

}


/*
    
    //Criando vetorzasso
    //adicionando o x1
    for(i = 0; i < n1; i++){
        vet_aux[i]=x1[i];
    }

    //adicionando o x2
    for(j=n1,i=0; j < (n1+n2); j++,i++){
        vet_aux[j]= x2[i]; 
    }
    
    for(i=0;i < (n1+n2); i++){
        igual=0;

        for(j=i-1; j > 0; j--){
            if(vet_aux[i]==vet_aux[j]){
                igual = 1;
            }
        }
        if(!igual){
            x3[cont++]=vet_aux[i];
        }
    }
*/