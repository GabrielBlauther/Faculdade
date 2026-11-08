
#include <stdio.h>
#define N 10

void verificadores(char cpf [N], int *dv1, int *dv2){
    int i, s1 = 0, s2 = 0;
    int m1 = 10, m2 = 11, r1, r2;
    for(i=0; cpf[i]; i++){
        s1 += (cpf[i] - '0') * m1;
        m1--;
        s2 += (cpf[i] - '0') * m2;
        m2--;
    }
    
    r1 = s1 % 11;

    *dv1 = r1 == 0 || r1 ==1 ? 0: 11 -r1; // operador ternario
    s2 += (*dv1 * 2);
    r2 = s2 % 11;
    if(r2 == 0 || r2 == 1){
        *dv2 = 0;
    }else{
        *dv2 = 11 - r2;
    }
    
}



int main(){
    char cpf [N] = "611006656"; // 76
    int d1,d2;
    verificadores(cpf, &d1, &d2);
    printf("Digito_1: %d digito_2: %d\n", d1,d2);
}