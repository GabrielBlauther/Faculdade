/*| Exercício 01) Desenvolva um programa em C que solicite ao usuário 
informar 20 valores inteiros e armazene estes valores em um vetor. Após ler e 
armazenar os dados no vetor, o programa em C deverá verificar quantos 
elementos do vetor estão repetidos e quantas vezes cada um se repete. Após o 
programa em C deverá mostrar na tela um relatório com estes dados. É 
importante ressaltar que os números só podem aparecer uma vez, não podendo 
aparecer números duplicados.
Exemplo para um vetor de 10 posições:
V[0]= 5 V[2]= 3 V[4]= 5 V[6]= 4 V[8]= 4
V[1]= 4 V[3]= 18 V[5]= 3 V[7]= 18 V[9]= 18
Caso sejam digitados os valores acima, o programa em C deverá mostrar no 
final as seguintes informações:
• O número 5 aparece 2 vezes
• O número 4 aparece 3 vezes
• O número 3 aparece 2 vezes
• O número 18 aparece 3 vezes*/

#include <stdio.h>

int main(){
    int vetor[10], cont=0,i,j,k,comparador,vetorNovo[10];

    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<10;i++){
        cont=0;
        comparador=vetor[i];
        for(j=0;j<10;j++){    
            if(comparador == vetor[j]){
                cont++; 
            }
        }
        if(cont>=2){
            printf("\nO numero %d apareceu %d vezes",vetor[i],cont);
        }
    }

}
