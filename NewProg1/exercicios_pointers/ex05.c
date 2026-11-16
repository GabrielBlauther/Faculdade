/*
7) Faça uma função, cujo protótipo é definido por

void dois_maiores(char str[], int *primeiro, int *segundo)

que recebe uma string (números positivos separados pelo caracter ‘#’) 
e retorne os dois maiores valores existentes (ordem decrescente) na string pelos parâmetros 
primeiro e segundo. Por exemplo, para a string

10#20#191#7#34

a função deverá retornar 191 no parâmetro primeiro e 34 no parâmetro segundo. 
Note que os valores estão em ordem decrescente.
*/

#include <stdio.h>

void dois_maiores(char str[], int *primeiro, int *segundo){
    int num=0, maior_1=0, maior_2=0;
    for(int i = 0; str[i];i++){
        if(str[i] != '#'){
            num = (num*10) + (str[i] - '0');
        }
        if(str[i] == '#' || str[i+1] == '\0'){

            if(num > maior_1){
                maior_2 = maior_1;
                maior_1 = num;
                printf("\n Valor de num: %d \n", num);
            }
            if(num > maior_2 && num < maior_1){
                maior_2 = num;
            }
            num=0;
        }
    }
    *primeiro = maior_1;
    *segundo= maior_2;
    
}


int main(){
    // String do enunciado (esperado: primeiro = 191, segundo = 34)
    char str[] = "1000#20#191#70000#10000";

    // String extra para testar (esperado: primeiro = 1000, segundo = 250)
    // char str[] = "10#20#191#7#34#250#8#99#1000#45";

    int primeiro, segundo;
    dois_maiores(str, &primeiro, &segundo);
    printf("primeiro = %d, segundo = %d", primeiro, segundo);
}