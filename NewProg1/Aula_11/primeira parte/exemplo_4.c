/*
3) Fazer uma função que calcule a partir de um horário inicial (hora e minuto) 
mais uma quantidade de minutos, o horário correspondente ao horario inicial adicionado a essa quantidade de minutos. 
Protótipo: 
    void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2)
*/
#include <stdio.h>

struct horario{

    int h,m;


}; typedef struct horario HORARIO;

void calc(HORARIO h1, int qtd, HORARIO *h2){
    int total = h1.h * 60 + h1.m + qtd;
    /*
    (*h2).h = (total / 60) % 24;
    (*h2).m = total % 60;
    */
   //existem estas duas formas
    h2->h = (total / 60) % 24;
    h2->m = total % 60;

}



int main(){
    
    HORARIO h1 = {23, 40};
    HORARIO h2;
    int qtd = 30;

    calc(h1, qtd, &h2); //struct é copia e não referência
    printf(" %d: %d\n",h2.h,h2.m);
}