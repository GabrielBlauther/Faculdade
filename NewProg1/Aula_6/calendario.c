#include <stdio.h> 

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

int totalDias(int m, int a){
    int dias[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int total = dias[m];

    if(m==2 && a%4==0){
        total++;
    }
    return total;
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

void geraCal(int cal[6][7],int m,int a,int ds){
    int i, j, d=1;
    int total = totalDias(m, a);
    for(i=0; i<6;i++){
        for(j=0; j < 7; j++){
            if(i==0 && j < ds){
                cal[i][j] = 0;
            }
            else if(d > total){
                cal[i][j] = 0;
            }
            else{
                cal[i][j] = d++;
            }
        }
    }
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/
void escreveCal(int cal[6][7]){
    int i, j;
    for(i=0;i<6;i++){
        for(j=0;j<7;j++){
            printf("% 4d", cal[i][j]);
        }
        printf("\n");
    }
}
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/


int main(){
    int m,a,ds; //ds= dia da semana

    int cal[6][7]; //calendario

    printf("Digite o mes e ano: \n");
    scanf("%d %d", &m, &a);

    printf("Digite o dia que começa o mes: \n");
    scanf("%d", &ds);

    geraCal(cal,m,a,ds);//calendario, mês, ano, dia da semana
    
    escreveCal(cal);

}