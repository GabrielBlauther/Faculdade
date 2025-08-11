/*Desenvolva um programa em C que solicite ao usuário informar dois valores inteiros que
correspondam ao número de termos da série e um valor positivo x. O programa em C deve calcular e
mostrar na tela o resultado da série: */

#include <stdio.h>
#include <math.h>
main(){
int i,num,den=1,x,nterm,cont=0,primo=0;
float soma;
printf("Informe o valor de x: ");
scanf("%d",&x);
printf("Informe o numero de termos: ");
scanf("%d",&nterm);
printf ("Serie:\n");
for (i=1;i<=nterm;i++){
    num=pow(x,i+1);
    while(nterm>=cont)
      for(x=2;x<=num/2;x++){
        num++;
      if(num%x==0){
        primo=x;
        cont++;
    }
  }
}
printf("\n\nResultado da serie = %.3f\n",soma);
}