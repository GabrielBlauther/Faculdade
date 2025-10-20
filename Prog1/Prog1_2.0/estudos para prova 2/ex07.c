#include <stdio.h>

int main(){
    int competidores=5,i,j,atleta,cod_ganhador;
    float pontuação=0,menor_pontuação,maior_pontuação=0,soma_pontuação=0;

    for(i=0;i<competidores;i++){
        printf("Digite o codigo do %d atleta: ",i+1);
        scanf("%d",&atleta);
        menor_pontuação=10000;
        for(j=0;j<5;j++){
            printf("Digite a pontuação do %dº competidor: ",i+1);
            scanf("%f",&pontuação);
            if(pontuação<menor_pontuação){
                menor_pontuação=pontuação;
            }
            soma_pontuação+=pontuação;
        }
        soma_pontuação-=menor_pontuação;
        if(soma_pontuação>maior_pontuação){
            maior_pontuação=soma_pontuação;
            cod_ganhador=atleta;
        }
    }
    printf("O ganhador foi o atleta de codigo: %d com %.2f pontos",cod_ganhador,maior_pontuação);
}