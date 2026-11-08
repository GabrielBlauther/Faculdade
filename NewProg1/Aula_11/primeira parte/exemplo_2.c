#include <stdio.h>

int main(){
    int a = 10;
    int *p = NULL;// é uma variavel que pode armazenar valores int
    p= &a;//" p aponta para a"
    printf("Valor do Pointer: %u\n",p);
    //printf("Endereço de A=%u valor de A=%u\n", &a, a);// com o & trazemos o endereço da variavel 
    printf("Endereço de P=%u valor de P=%u\n", &p,*p);//com o asterisco ele aponta para possição de memoria que ele pegou e lá vai estar o valor contido.

    
}