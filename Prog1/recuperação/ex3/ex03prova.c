#include <stdio.h>
#include <math.h>
main() {
    int n,i,fatorial,j;
    float x,termo,soma=0,denominador;
    printf("Informe o numero de termos da serie (n): ");
    scanf("%d",&n);
    printf("Informe o valor de x (positivo): ");
    scanf("%f",&x);
    for (i = 1; i <= n; i++) {
        fatorial=1;
        for (j = 2; j <= i+2; j++) {
            fatorial *= j;
        }
		denominador = pow(x-(i + 1),i);
		if (denominador==0){
			printf("\nSerie interrompida! Divisao por zero!");
			break;
		}
        if (i % 2 == 1) {
            soma-=fatorial / denominador;
            printf(" - %d/%.1f",fatorial,denominador);
        } else {
            soma+=fatorial/denominador;
            printf(" + %d/%.1f",fatorial,denominador);
        }
    }
    printf("\nSoma da serie: %.4f\n",soma);
}