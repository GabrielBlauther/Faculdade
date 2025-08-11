/*13) Desenvolva um programa em C que solicite ao usuário informar 20 valores inteiros e armazene
estes valores em um vetor. Após ler e armazenar os dados no vetor, o programa em C deverá calcular e
mostrar na tela a soma dos números pares e a quantidade dos números ímpares, mostrando o relatório
abaixo. Caso não seja informado nenhum número ímpar, mostre a mensagem “Não existe nenhum
número ímpar”. Caso não seja informado nenhum número par, mostre a mensagem “Não existe
nenhum número par”.*/

#include <stdio.h>

int main(){
  int vetor[20],i,somaImpar=0,somaPar=0,cont1=0,cont2=0;

  printf("Digite 20 valores:\n");
  for(i=0;i<20;i++)
    scanf("%d",&vetor[i]);

  for(i=0;i<20;i++){
    if(vetor%2==0){
      cont1++;
      somaPar+=vetor[i];
    }
    else{
      cont2++;
    }
  }
  if(cont1 == 0)
    printf("Não foram digitados numeros pares");
  else
    printf("A soma dos numeros pares e:%d\n",somaPar);
  if(cont2 == 0)
    printf("Não foram digitados numeros impares");
  else
    printf("A quantidade de numeros impares é: %d",cont2);

}
