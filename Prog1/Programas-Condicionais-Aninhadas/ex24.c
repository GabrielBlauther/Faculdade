/*24) Desenvolva um programa que leia três valores inteiros que correspondam ao dia, mês e ano e
mostre na tela data correspondente ao dia seguinte. Lembrem-se que abril, junho, setembro e
novembro tem 30 dias, fevereiro tem 28 (29 em ano bissexto) e todos os outros meses tem 31 dias.
Para saber se um ano é bissexto:
1. Se o ano for divisível por 4, vá para a etapa 2. Caso contrário, vá para a etapa 5.
2. Se o ano for divisível por 100, vá para a etapa 3. Caso contrário, vá para a etapa 4.
3. Se o ano for divisível por 400, vá para a etapa 4. Caso contrário, vá para a etapa 5.
4. O ano é bissexto (ela tem 366 dias).
5. O ano não é um ano bissexto (ela tem 365 dias).
Exemplo: Se o usuário digitar dia=28, mês=2 e ano=2016, o programa deverá mostrar na tela a
data do próximo dia: 29/02/2016. */

Exercício 24:

#include <stdio.h>
main(){
    int dia,mes,ano;
    printf("Digite o dia:\n");
    scanf("%d",&dia);
    printf("Digite o mes:\n");
    scanf("%d",&mes);
    printf("Digite o ano:\n");
    scanf("%d",&ano);
    dia++;
    if (dia==32&&(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10)){
        dia=1;
        mes++;
    }
    else if (dia==31&&(mes==4||mes==6||mes==9||mes==11)){
            dia=1;
            mes++;
    }
        else if (dia==32&&mes==12){
                dia=1;
                mes=1;
                ano++;
        }
            else if(dia==29&&mes==2){
                dia=1;
                mes=3;
            }


    printf("\nProximo dia eh %d/%d/%d\n",dia,mes,ano);
}