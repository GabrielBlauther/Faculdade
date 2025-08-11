/* 13) Desenvolva um programa que solicite que o usuário informe um código e três valores nomeados
como a, b e c. O código vai determinar qual operação o programa irá realizar:
✔ código = 1: multiplicar os três valores;
✔ código = 2: somar os três valores;
✔ código = 3: subtrair os três valores;
✔ código = 4: somar o cubo dos 3 valores;
Considerar que o usuário vai digitar apenas códigos válidos (de 1 a 4) e os três valores digitados
serão diferentes de zero e positivos.*/

#include <stdio.h>
#include <math.h>  // Necessário para a função pow()

int main() {
    int codigo;
    float a, b, c, resultado;

    printf("Digite o código da operação (1-Multiplicar, 2-Somar, 3-Subtrair, 4-Somar o cubo): ");
    scanf("%d", &codigo);

    printf("Digite três valores positivos diferentes de zero: ");
    scanf("%f %f %f", &a, &b, &c);

    if (codigo == 1) {
        resultado = a * b * c;
        printf("Resultado da multiplicação: %.2f\n", resultado);
    }
    else if (codigo == 2) {
        resultado = a + b + c;
        printf("Resultado da soma: %.2f\n", resultado);
    }
    else if (codigo == 3) {
        resultado = a - b - c;
        printf("Resultado da subtração: %.2f\n", resultado);
    }
    else if (codigo == 4) {
        resultado = pow(a, 3) + pow(b, 3) + pow(c, 3);
        printf("Resultado da soma dos cubos: %.2f\n", resultado);
    }

    return 0;
}
