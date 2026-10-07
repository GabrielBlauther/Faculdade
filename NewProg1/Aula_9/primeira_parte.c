/*
18)Escreva uma função em C com o seguinte protótipo

int hex2int(const char str[])
que receba uma string com um número em hexadecimal, após converta o número lido para decimal, armazenando-o em uma variável inteira e a retorne.
*/

#include <stdio.h>
#include <string.h> 

#define N 10

int hex2dec(char str[N]){
    int dec = 0;
    int mult = 1;

    for(int i = strlen(str) - 1; i >= 0; i--) {

        if(str[i] >= '0' && str[i] <='9'){
            dec += (str[i]-'0') * mult;

        }else if (str[i] >= 'a' && str[i] <= 'f' ){
            dec+= (str[i] - 87) * mult;

        }else if(str[i] >= 'A' && str[i] <= 'F' ){
            dec+= (str[i] - 55) * mult;
        }else{
            return 0;

        }
        mult*=16;
    }

    return dec;
}

/*-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/
int main(){
    char hex[N];
    printf("Digite o valor em hexadecimal: ");
    scanf("%s", hex);
    printf("Decimal: %d\n", hex2dec(hex));
}

/*-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/
