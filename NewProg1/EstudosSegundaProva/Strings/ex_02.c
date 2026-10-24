/*
3) Implemente uma função em C 
que receba uma string contendo vários números inteiros separados por espaços 
e verifique se os números estão em ordem crescente (números repetidos são permitidos). 
A função deverá retornar 1 se estiverem e 0 caso contrário. 
A função deve obrigatoriamente seguir o protótipo: 
*/


#include <stdio.h> 
#define N 100

int verificar_ordem_crescente(char numeros[N]){
    int i,num_1=0, num_2=0, cont=0;

    for(i=0; numeros[i];i++){
        if(numeros[i] >= '0' && numeros[i] <= '9'){
            num_2 = num_2*10 + numeros[i] - '0';
        }
        else {
            if( cont == 1){
                if(num_1 > num_2){
                    return 0;
                }
                cont = 0;
           } 
            cont ++;
            num_1 = num_2;
            num_2 = 0; 
        }
    }
    return 1;
}

int main(){
    char str[N];

    printf("digite alguma coisa ai: ");
    gets(str);
    if(verificar_ordem_crescente(str)){
        printf("Eh ordem crescente");
    }else{
        printf("Nao eh ordem crescente");
    }

}