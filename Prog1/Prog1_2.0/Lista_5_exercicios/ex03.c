/*
Exercício 03) Desenvolva um programa em C que solicite ao usuário
informar 20 números inteiros. O programa em C deverá mostrar na tela o menor
número digitado e a quantidade de números que são iguais a este número.
*/

#include <stdio.h>

int main(){
    int num,menor=0,qntd,i,cont=0;
        
    printf("Digite o 1º numero: \n");
    scanf("%d",&num);
    menor=num;
    for(i=1;i<20;i++){
        
        printf("Digite o %dº numero: \n",i+1);
        scanf("%d",&num);
        
        if(num<menor){
            menor=num;
            cont=1;
        }else if(num == menor){
            cont++;
        }
    }
    printf("O menor numero digitado foi: %d que se repetiu %d vezes",menor,cont);
}