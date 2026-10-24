/*
1) Implemente uma função que receba uma string contendo números inteiros misturados com letras e outros caracteres quaisquer. 
A função deve identificar todos os números presentes na string, somá-los e retornar o valor total dessa soma.

Atenção:
    • Caracteres que não são dígitos devem ser ignorados. 
    • Um número pode possuir mais de um dígito. 
    • Um novo número começa sempre que uma sequência de dígitos é interrompida por um caractere não numérico. 
    • Não é permitida a utilização de funções de manipulação de strings.
*/



#include <stdio.h> 


#define N 100


/*-=-=-=--=-=-=-=-=-=-=-=-=-=-==-=--=-=-=-=-=--=-=-=--=-=-=-=-=-=-*/
int soma_numeros(char str[N]){
    int vet_aux[N], i, j, soma=0,cont=0,soma_final=0;

    for(i=0; str[i];i++){
        if(str[i] >= '0' && str[i] <= '9'){
            soma= (soma*10) + (str[i] - '0' );
        }else if(str[i-1] ){
            soma_final += soma;
            soma=0;
        }
    }
    soma_final+=soma;
    printf("%d\n",soma_final);

}
/*-=-=-=--=-=-=-=-=-=-=-=-=-=-==-=--=-=-=-=-=--=-=-=--=-=-=-=-=-=-*/


int main(){
    char str[N];

    printf("Digite: \n");
    scanf("%s", str );

    printf("Soma dos números: %d, ",soma_numeros(str));
}