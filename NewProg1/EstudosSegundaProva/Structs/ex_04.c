/*
Considere um vetor de estruturas para representar as coordenadas x, y e z de um conjunto de pontos tridimensionais. 
Cada ponto é representado pelo tipo  abaixo, onde: rotulo é um campo para armazenar o nome do ponto e coordenadas 
é um vetor de 3 posições para representar as coordenadas x, y e z, respectivamente.

typedef struct ponto {
       char rotulo[100];
       float coordenadas[3];
} PONTO;

Faça uma função que receba como parâmetro um vetor de estruturas do tipo PONTO e ao final escreva a distância dos 
dois pontos mais próximos. A função deverá escrever ainda as coordenadas dos dois pontos mais próximos. 
A quantidade de pontos é definida através da diretiva #define.

Protótipo:
*/