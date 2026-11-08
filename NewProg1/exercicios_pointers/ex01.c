/*
3) Fazer uma função que calcule a partir de um horário inicial (hora e minuto) mais uma quantidade de minutos, 
o horário correspondente ao horario inicial adicionado a essa quantidade de minutos.
Protótipo: 
        void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2)
*/

#include <stdio.h>
typedef struct horario {
    int hora;
    int minuto;
} HORARIO;

void calc_horario(int h1, int m1, int qtdmin, int *h2, int *m2){
    h1 = h1*60 + m1 + qtdmin;
    //printf("antes: %d", h1);
    *h2 = (h1/60) % 24;
    //printf("\n%d", *h2);
    *m2= h1%60;
    //printf("\n%d", *m2);
}




int main(){
    HORARIO hora_inicial = {24,30};
    HORARIO hora_final;
    int qtdmin = 30234;

    calc_horario(hora_inicial.hora, hora_inicial.minuto, qtdmin, &hora_final.hora, &hora_final.minuto);
    printf(" %02d:%d\n",hora_final.hora,hora_final.minuto);

}