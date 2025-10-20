#include <stdio.h>

int main(){
    int m,n,ehPrimo,i,j,k,gemeo;

    printf("Digite o intervalo: ");
    scanf("%d%d",&m,&n);
    
    for(i=m;i<n;i++){
        ehPrimo=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                ehPrimo=0;
            }
        }
        if(ehPrimo==1){
            gemeo=i+2;
            for(k=2;k<gemeo;k++){
                if(gemeo%k==0){
                    ehPrimo=0;
                }
            }
        }
        if(ehPrimo==1){
            printf("%d - %d ",i,gemeo);
        }
    }
} 