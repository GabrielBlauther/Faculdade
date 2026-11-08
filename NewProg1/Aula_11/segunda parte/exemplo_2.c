#include <stdio.h> 

void escreve(int *v1, int n){
    int i;
    for(i = 0; i<n; i++){
        printf("%d\n", v1[i]);
    }
}

int main(){
    int v[5] = { 8,4,9,7,2};

    escreve(v, 5);
}