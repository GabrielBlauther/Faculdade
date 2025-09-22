/*
Exercício 06) Fazer um programa em C que gere os dias dos 12 meses a partir do ano informado. 
Lembrar de considerar anos bissextos. 
O programa deverá solicitar o ano e gerar todos os dias de todos os meses. 
É importante que seja utilizado o mesmo padrão gráfico do exemplo. 
Não é necessário considerar dias da semana nesse programa. 
É necessário que o padrão dos dias fique sempre com 2 dígitos (por exemplo 01 e 31). 
É importante que os separadores sejam mostrados conforme o exemplo. 
Também é regra que cada dia do mês seja impresso por um printf,
 não sendo permitido no mesmo printf imprimir mais de 1 dia ao mesmo tempo.
*/

#include <stdio.h>

int main(){
    int i, ano,j,k,dias;

    printf("Digite o ano: ");
    scanf("%d",&ano);

    for(i=1;i<=12;i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12 ){
            dias=31;
        }else if(i == 4 ||i == 6 ||i == 9 || i == 11 ){
            dias=30;
        }else if(i == 2){
            if((ano % 4 == 0 && ano % 100!= 0) || (ano % 400 == 0)){
                dias=29;
            }else{
                dias=28;
            }
        }
        printf("\n--------------------------\n");
        printf("|||||||||||||||||||||||||||\n");
        printf("--------------------------\n");
        printf("      MES: %d/%d",i,ano);
        printf("\n--------------------------\n");
        for(j=1;j<=dias;j++){
            if(j<10){
                printf(" 0%d ",j);
            }
            if(j==7){
                printf("\n");
            }
            if(j==15){
                printf("\n");
            }
            if(j==22){
                printf("\n");
            }
            if(j==29){
                printf("\n");
            }
            if(j>=10){
                printf(" %d ",j);
            }
        }
    }
}