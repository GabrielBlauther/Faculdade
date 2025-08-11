/*21) O módulo ou valor absoluto de um número é a distância de um ponto da reta à origem ( distância do
ponto até o zero). Assim, a distância do ponto 5 à origem é 5. A distância do ponto -3 à origem é 3, pois
não há sentido em representar distâncias negativas. Então o módulo de -3 é 3. A representação dos
módulos é a seguinte:
|5| = 5
|-3| = 3
Desenvolva um programa que solicite ao usuário informar dois valores inteiros. O programa
deverá calcular a diferença do primeiro pelo segundo número e após mostrar na tela o módulo desta
diferença, isto é, |valor1-valor2|.
Exemplo:*/

Exercício 21:

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n1,n2;
    printf("Digite dois numeros: ");
    scanf("%d%d",&n1,&n2);
    printf("Resultado = %d",abs(n1-n2));

    return(0);
}