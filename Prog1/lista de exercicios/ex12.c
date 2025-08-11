/*12) A conjectura de Goldbach diz que todo número par maior que 2 pode ser representado como a
soma de dois números primos. Assim, 4=2+2, 6=3+3, 8=3+5...
Desenvolva um programa em C que leia um número inteiro par. O programa em C deve mostrar
na tela em ordem crescente, os dois números primos que o compõem o número inteiro digitado. No
caso de haver mais de um par de números, por exemplo, 20=3+17 e 20=7+13, mostre na tela o par que
tiver o menor número primo.*/

#include <stdio.h>

int main(){
  int n,x,cont=0,num=0,divisores,primeiro=0,maior=0,parar=0,aux;

  printf("Digite um valor: ");
  scanf("%d",&n);
  while(parar == 0){

    divisores=0;

    for(x=2;x<=num/2;x++){
      if(num%x==0) divisores++;
    }

    if(divisores == 0 && num > 1){
      aux= n-num;
    divisores = 0;

    for (x = 2; x <= aux / 2; x++) {
      if (aux % x == 0) divisores++;
    }
    if (divisores == 0 && aux > 1) {
    printf("%d = %d + %d\n", n, num, aux);
    break;
  }
  }

 num++;
}
}