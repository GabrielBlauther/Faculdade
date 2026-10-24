/*
2) Implemente uma função em linguagem C que receba uma string contendo uma operação matemática e retorne o resultado dessa operação. 
As operações possíveis são: +, -, * e /.
Para facilitar, considere que:
    • Não existem espaços em branco na string; 
    • Na string existe apenas uma operação; 
    • Sempre existem dois números inteiros na string;
    • A conversão dos números deve ser feita caractere a caractere, ou seja, não é permitida a utilização de funções de manipulação de strings (strlen, atoi, strtok, etc); 

A função deve identificar o operador, separar os dois números, convertê-los para valores numéricos e realizar o cálculo correspondente.

Protótipo da função: 
*/

#include <stdio.h>

#define N 100

double calcula_operacao(char str[N]){
    double num_1, num_2, res;
    char op;
    int i;

    for(i=0; str[i]; i++){
        if(str[i] > '0' && str[i] < '9'){
            num_2 = num_2 * 10 + (str[i] - '0');
        }else{
            op = str[i];
            num_1 = num_2;
            num_2=0;
        }
    }
    switch(op){
        case '+': res = num_1+num_2;
            break;
        case '-': res = num_1-num_2;
            break;
        case '*': res = num_1*num_2;
            break;
        case '/': res = num_1/num_2;
            break;
    }
    return res; 
}


int main (void) {

    char str[N];

    printf("Digite uma operação: ");
    scanf("%s", str);

    printf("\n Resultado: %.2f", calcula_operacao(str));

}