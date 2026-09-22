//Exemplos de char

#include <stdio.h>

int main(){

    char c [5]= {65, 114, 97, 114, 97};

    printf("\n\n\n");
    for(int i = 0; i < 5; i++){
        printf("%c", c[i]);
    }
    printf("\n\n\n");
}