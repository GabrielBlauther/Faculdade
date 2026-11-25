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
/*-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
int* interseccao(int *v1, int n1, int *v2, int n2,int *t){
    *t = 0;
    int i, j, k;

    for(i=0; i<n1; i++){
        for(j=0;j<n2; j++){
            if(v1[i]==v2[j]){
                (*t)++;
                break;
            }
        }
    }
    int tamanho = *t;
    int *v3 = (int *) malloc(tamanho* sizeof(int));
    
    if ( v3 != NULL){
        k=0;
        for(i=0; i < n1; i++){
            for(j = 0 ; j < n2 ; j++ ){
                if(v1[i] == v2[j]){
                    v3[k++]=v1[i];
                }
            }
        }
    }
    printf("%d", *t);

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