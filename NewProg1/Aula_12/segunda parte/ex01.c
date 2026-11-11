#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * gera_senha(int n){ 
    srand(time(NULL));
    int i, op;
    char *s = malloc((n+1) * sizeof(char));
    if(s != NULL){
        for(i=0; i<n; i++){
            op = rand() % 3;
            switch(op){
                case 0: s[i] = rand() % 26 + 'A'; break;
                case 1: s[i] = rand() % 26 + 'a'; break;
                case 2: s[i] = rand() % 10 + '0'; break;
            }
        }
        s[i] = '\0';
    }
    return s;
}

int main(){
   char *senha = gera_senha(10);
   if(senha != NULL){
    printf("%s\n", senha);
    free(senha);
   }    
}