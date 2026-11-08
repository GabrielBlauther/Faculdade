/*
1) Fazer uma função que troque o valor de duas variáveis inteiras informadas como parâmetro.
*/

#include <stdio.h>

void troca_num(int *a, int *b){
    int aux = *a;
    *a= *b;
    *b = aux;
}


int main(){
    int a = 1, b = 2;

    troca_num(&a, &b); 
    printf("a= %d b= %d", a ,b );
    
}

/*
Considerações: 
 -Achei um pouco confuso na primeira vista essa ideia de *p mas consegui entender de certa forma que
  o ponteiro recebe um enderço e apartir dele você manipula este valor e que a função fora da main faz
  apenas uma copia daquele valor e se quisermos mudar o valor devemos ter que usar os end de memória
  talvez eu esteja viajando com estas primeiras impressões, mas, foi o que meu brain entendeu :)
*/