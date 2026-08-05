#include <stdio.h> 

int main(void){
    int hi, mi, hf, mf, total,h, m;

    printf("Digite o horario de entrada: \n");
    scanf("%d%d", &hi, &mi);

    printf("Digite o horario de saida: \n");
    scanf("%d%d", &hf, &mf);

    mi = hi * 60 + mi; // min inicial
    mf = hf * 60 + mf; // min final

    if(mi <= mf){ //mesmo dia, horario inicial menor que o final ex: entrou as 15 e saiu as 15:30
        total = mf - mi;
    } else {
        total = 1440 - mi + mf; // Se passou de um dia a gente ve a diferença até as 24 horas do dia (1440) e somamos com o valor final para dar o tempo completo.
    }

    h = total / 60;
    m = total % 60;

    printf("%02d:%02d",h,m);
    return 0;
}
