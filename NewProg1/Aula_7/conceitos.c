//Exemplos de char

#include <stdio.h>
#include <stdio_ext.h>// Lib para podermos limpar o enter

#define N 100

// int main(){

//     char s [N]= "Programacao de computadores I";

//     printf("\n\n\n");
//     s[11]='\0';
//     printf("%s\n",s); // podemos usar esta forma para imprimir a string.
//     // for(int i = 0; s[i] != '\0' ; i++){
//     //     printf("%c", s[i]);
//     // }
//     printf("\n\n\n");
// }

void geraString(char s[N], char c, int n){
    int i;

    for(i=0; i<n; i++){
        s[i] = c;
    }
    s[i] = '\0';
     
}

int main(){
    char str[N], c;
    int n;

    printf("Digite o número de vezes: ");
    scanf("%d", &n);

    __fpurge(stdin);//Limpar o enter     
    printf("Digite o caractere: ");
    scanf("%c",&c); 
    
    geraString(str,c,n);
    printf("%s\n!!!!!", str);

}