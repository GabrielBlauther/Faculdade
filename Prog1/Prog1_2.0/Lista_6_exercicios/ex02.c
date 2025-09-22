/*
Exercício 02) Um meteorologista registrou a temperatura de cada dia
de um determinado mês. Escreva um programa que leia a temperatura de todos
os dias desse mês e determine a maior, a menor e a média das temperaturas
registrada naquele mês. Usar variável float (temperatura é decimal). Importante:
Cada mês tem uma quantidade de dias. Você deve solicitar qual o mês (variável
inteira) deve ser lido.
Meses com 31 dias: Janeiro (1), Março (3), Maio (5), Julho (7), Agosto (8),
Outubro (10) e Dezembro (12)
Meses com 30 dias: Abril (4), Junho (6), Setembro (9) e Novembro (11)
Fevereiro (2): Quando ano bissexto tem 29 caso contrário é 28.
Dica: código para descobrir se o ano é bissexto if ((ano % 4 == 0 && ano % 100
!= 0) || (ano % 400 == 0))
*/
#include <stdio.h>

int main(){
    int mes, dias,ano,i,cont=0;
    float temperatura,media,menorT=1000,maiorT=-10000;

    printf("Digite o ano: ");
    scanf("%d",&ano);
    printf("Digite o mes: \n");
    scanf("%d",mes);
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12 ){
        dias=31;
    }else if(mes == 4 ||mes == 6 ||mes == 9 || mes == 11 ){
        dias=30;
    }else if(mes == 2){
        if((ano % 4 == 0 && ano % 100!= 0) || (ano % 400 == 0)){
            dias=29;
        }else{
            dias=28;
        }
    }
    for(i=0;i<dias;i++){
        printf("Digite a temperatura do dia %d: \n",i+1);
        scanf("%d",temperatura);
        if(temperatura > maiorT){
            maiorT=temperatura;
        }else if(temperatura < menorT){
            menorT=temperatura;
        }
        media+=temperatura;
        cont++;
    }
    printf("Mês escolhido %d\nA menor temperatura foi de %2.fC\n A maior temperatura foi de: %.2f\nC media de temperatura durante o mês:%dC",mes,menorT,maiorT,media/cont);

}