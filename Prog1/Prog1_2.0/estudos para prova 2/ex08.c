#include <stdio.h>

int main(){
    int num,aux,num_1,num_2,maior_ascendente=0,iSacendente,cont=0;

    while(1){
        printf("Digite um numero(0 para parar): "); 
        scanf("%d",&num);
        iSacendente=1;
        if(num==0){
            break;
        }
        aux=num;
        while(aux>0){
            num_1=aux%10;
            aux/=10;
            num_2=aux%10;
            if(num_1<num_2){
                iSacendente=0;
            }
        }
        if(iSacendente==1){
            cont++;
            if(maior_ascendente < num)
            maior_ascendente=num;
        }
    }
    if(cont==0){
        printf("Nenhum numero ascendente foi digitado");
    }else{
        printf("O maior numero ascendente digitado foi: %d",maior_ascendente);
    }
}