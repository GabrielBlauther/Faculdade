/*
2) Fazer uma função que retorne os dois dígitos verificadores do cpf informado como parâmetro (inteiro).
*/

#include <stdio.h>


int main(){
    int cpf = 034900540;
    int *p =NULL;
    
    *p = &cpf;

    verificador();
    
}