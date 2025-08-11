/*22) A distância entre dois pontos definidos pelas coordenadas (X1,Y1) e (X2,Y2) é dada pela fórmula
d= √(X 1−X 2)
2
+(Y 1−Y 2)
2
.
Desenvolva um programa que solicite ao usuário informar 8 valores representando as coordenadas X e
Y de 4 pontos. Considere que o usuário informou os pontos no sentido horário, seguindo o perímetro do
quadrado. O programa deve verificar se os pontos formam um quadrado, mostrando na tela as
mensagens “Os pontos formam um quadrado” ou “Os pontos não formam um quadrado”.
Para verificar se as coordenadas informadas formam um quadrado, a distância entre todas as
coordenadas devem ser iguais.*/

#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2, x3, y3, x4, y4;

    printf("Digite as coordenadas dos 4 pontos (X Y) no sentido horário:\n");
    scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    // Calcula as distâncias entre os pontos adjacentes
    float d1 = distancia(x1, y1, x2, y2);
    float d2 = distancia(x2, y2, x3, y3);
    float d3 = distancia(x3, y3, x4, y4);
    float d4 = distancia(x4, y4, x1, y1);

    // Calcula as diagonais
    float diag1 = distancia(x1, y1, x3, y3);
    float diag2 = distancia(x2, y2, x4, y4);

    // Verifica se os quatro lados são iguais e as diagonais também
    if (d1 == d2 && d2 == d3 && d3 == d4 && diag1 == diag2) {
        printf("Os pontos formam um quadrado\n");
    } else {
        printf("Os pontos não formam um quadrado\n");
    }

    return 0;
}
