#include <stdio.h>

int main(void){
    int a,b,c,t;
    printf("Digite os lados: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a==b && b == c){ 
        t = 0;
    } else if  ( a==b || b==c || a==c) { 
        t = 1; 
    } else {
        t = 2;
    } 

}