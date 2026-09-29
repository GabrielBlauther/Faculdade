//Palindromo com string


#include <stdio.h>

#define N 100

/*--------------------------------*/
int tamanho(char str[N]){
    int i, cont=0;

    for( i = 0; str[i]; i++);
    return i;
}

/*--------------------------------*/
int palindrome(char str[N]){
    int i, f;

    for(i=0, f=tamanho(str) - 1; i<f ;i++,f--){ // usamos a função tamanho para pode iniciar o F pelo tamanho da string -1 para tirar o "\0'"
        if(str[i] != str[f]){ // Comparamos as duas se forem diferentes não é um palidromo
            return 0;
        }
    }

    return 1;

}
/*--------------------------------*/

int main(){
    char str[N];

    printf("Digite a string: \n");
    gets(str);

    //printf("Tamanho: %d\n", tamanho(str));
    if(palindrome(str))
    {
        printf("É palindromo\n");
    } 
    else
    {
        printf("Não é palindrome\n");
    }
}