#include <stdio.h>
#include <stdlib.h>

/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
void escreve( int *v, int n){
    int i;
    for(i=0; i<n; i++){
        printf("\n%d ", v[i]);
    }
    printf("\n--------------------------\n");
}

//agora usando calloc
/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
int* interseccao(int *v1, int n1, int *v2, int n2,int *t){
    *t = 0;
    int i,j,k=0;
    int *v3 =(int*) malloc(n1 * sizeof(int));
    if(v3){
        *t = 0;
        for(i=0;i<n1;i++){
            for(j=0; j<n2;j++){
                v3[(*t)++] = v1[i];
                break;
            }
        }
        v3 = (int *) realloc(v3, *t * sizeof(int));//redimensiona o tamanho;
    }
  
    return v3;
}


int main(){
    int t;
    int v1[3] = {3, 5, 7};
    int v2[2] = {4,5};
    
   // escreve(v1,3);
   //escreve(v2,2);
    int *v3 = interseccao(v1,3,v2,2,&t);
    if(v3){
        escreve(v3,t);
        free(v3);
    }

}   