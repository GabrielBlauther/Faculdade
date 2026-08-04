/*
git add .C00000350)
Faça um algoritmo que leia 3 valores a, b e c, lados de um triângulo, e verifique o tipo de triângulo formado escrevendo: 
0 - se o triângulo é equilátero (os três lados são iguais); 
1 - se o triângulo é isósceles (dois lados iguais e um diferente);
2 - escaleno (3 lados diferentes).*/
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

    printf("Triangulo %d \n", t);

}