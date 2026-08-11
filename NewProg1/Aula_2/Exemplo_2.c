/*
C00000600) 
Faça um algoritmo que leia 3 notas de um aluno e escreva sua média harmônica (MH). 
Caso alguma das notas seja 0 (zero), MH deve receber 0 (zero). 
Se o aluno obteve uma MH abaixo de 6.0, E SOMENTE NESSE CASO, o algoritmo deve ler uma quarta nota (da prova de recuperação) e substitua a menor das três notas pela nota da recuperação, recalculando MH. 
O algoritmo deve escrever a MH final e o conceito obtido (0, se MH < 6.0; 1 se 6.0 <= MH <7.0; 2 se 7.0 <= MH < 8.0; 3 se 8.0 <= MH < 9.0; 4 se MH>=9.0).  
Dica:A média harmônica entre três valores N1, N2 e N3 é calculada pela expressão 3/(1/N1+1/N2+1/N3).
*/

#include <stdio.h>

int main(void){
    float n1,n2,n3,m ;
    int mi,c;

    printf("Digite asa 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 == 0 || n2 == 0 || n3 == 0)
    {
        m = 0;
    } else 
    {
        m = 3/(1/n1 + 1/n2 + 1/n3);
    }
    printf("Média: %.2f \n", m);

    if(m < 6){
        c = 0;
    }else if (m < 7) {
        c= 1;
    }else if (m < 8) {
        c = 2;
    } else if( m < 9){
        c = 3;
    }else {
        c = 4 ;
    }

    mi = m;

    switch (mi) {
        case 10:
        case 9: c = 4;
        break;
        case 8: c = 3;
        break;
        case 7: c = 2;
        break;
        case 6: c = 1;
        break;
        default: c = 0;
    }

    printf("Conceito: %d \n", c);

    return 0;
}