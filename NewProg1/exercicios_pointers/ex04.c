/*
6) Faça uma função que receba como parâmetro uma matriz M[15][15] 
e retorne: o menor número primo da matriz e a sua respectiva posição (linha e coluna). 
O protótipo da função é dado por:

void menor_primo(int M[15][15], int *primo, int *lin, int *col)
*/

#include <stdio.h> 
#define N 15

int verifica_primaridade(int mat[N][N],int lin,int col){
    int i;
    int valor=mat[lin][col];
    for(i=2;i<=(valor/2);i++){
        if(valor % i == 0){
            return 0;
        }
    }
    if(valor != 0 && valor != 1){
        return 1;
    }else { return 0;}
}

void menor_primo(int mat[N][N], int *primo, int *lin, int *col){
    int i, j,cont = 0;
    //Percorre matriz
    for(i=0; i<N;i++){ // i = Linhas
        for(j=0;j<N;j++){ // j = colunas
            if(verifica_primaridade(mat, i, j)){
                if(cont == 0){
                    *primo = mat[i][j];
                    *lin = i;
                    *col = j;
                    cont++;
                }else if(*primo > mat[i][j]){
                    *primo = mat[i][j];
                    *lin = i;
                    *col = j;
                }
            }
        }
    }
}

int main(){
    // Matriz pronta para teste (menor primo: 7, linha 9, coluna 4)
    int mat[15][15] = {
        {  1,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48,  52,  56,  60},
        { 64, 101,  72,  76,  80,  84,  88,  92,  96, 100, 104, 108, 112, 116, 120},
        {124, 128, 132, 136, 140, 144, 148, 152, 156, 160, 164, 168, 172, 176, 180},
        {184, 188, 192, 196, 200, 204, 208, 212, 216, 220, 224,  31, 232, 236, 240},
        {244, 248, 252, 256, 260, 264, 268, 272, 276, 280, 284, 288, 292, 296, 300},
        {304, 308, 312, 316, 320, 324, 328, 332, 336, 340, 344, 348, 352, 356, 360},
        {364, 368, 372, 376, 380, 384, 388, 392, 396, 400, 404, 408, 412, 416, 420},
        {424, 428, 432, 436, 440, 444, 448, 452, 456, 460, 464, 468, 472, 476, 480},
        {484, 488, 492, 496, 500, 504, 508, 512, 516, 520, 524, 528, 532, 536, 540},
        {544, 548, 552, 556,   7, 564, 568, 572, 576, 580, 584, 588, 592, 596, 600},
        {604, 608, 612, 616, 620, 624, 628, 632, 636, 640, 644, 648, 652, 656, 660},
        {664, 668, 672, 676, 680, 684, 688, 692, 696, 700, 704, 708, 712, 716, 720},
        {724, 728,  13, 736, 740, 744, 748, 752, 756, 760, 764, 768, 772, 776, 780},
        {784, 788, 792, 796, 800, 804, 808, 812, 816, 820, 824, 828, 832, 836, 840},
        {844, 848, 852, 856, 860, 864, 868, 872, 876, 880, 884, 888, 892, 896,  0}
    };
    int col,lin,primo;
    menor_primo(mat,&primo,&lin,&col);
    
    printf("\nmenor primo: %d, linha %d, coluna %d", primo,lin,col);


}