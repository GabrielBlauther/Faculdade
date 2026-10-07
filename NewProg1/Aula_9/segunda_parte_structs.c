#include <stdio.h>
#include <time.h>

struct horario {
    int hora, minuto, segundo;
};
typedef struct horario HORARIO; // mudamos o nome da struct ai não precisa chamar sempre struct horario e sim HORARIO, por convenção em maiusculo para saber que é um struct

HORARIO proximo(HORARIO h){ //tipo horario e o nome da função proximo
    int total = h.hora *3600 + h.minuto *60 + h.segundo + 1;
    HORARIO p;

    p.hora = (total / 3600) % 24; // qualquer valor menor que 24 dara o mesmo valor
    total %= 3600;
    p.minuto = total / 60;
    p.segundo = total % 60;
    int tempo =1;
    while(tempo){
        sleep(1);
        p = proximo(h);
        printf("%02d:%02d:%02d\n", p.hora,p.minuto,p.segundo);
    }
    return p;
}

int main(){
    HORARIO h, p;

    printf("Digite o horario: \n" );
    scanf("%02d %02d %02d", &h.hora,&h.minuto, &h.segundo);
    //printf("Horario: %d:%d:%d\n", h.hora,h.minuto,h.segundo);
    
    
    
    p = proximo(h);

 
}