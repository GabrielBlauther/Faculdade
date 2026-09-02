#include <stdio.h>

#define N 9

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

void escreve_matriz(int mat[N][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("% 4d", mat[i][j]);
        }
        printf("\n");
    }
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

void sudoku (int mat[N][N], int lin, int col){
    int i, j,p, cont[10] = {0};
    for(j=0; j<10;j++){
        if(mat[lin][j] !=0){
            cont[mat[lin][j]]++;
        }
    }
    for(i=0; i< N; i++){
        if(mat[i][col] =! 0){
            cont[mat[i][col]]++;
        }
    }

    int li = lin/3*3;//linha inicial
    int ci= col/3*3; // Coluna inicial
    int lf= li + 3; // coluna inicial
    int cf= ci + 3; //coluna final



    for(i=li; i < lf; i++){
        for(j=ci; j < cf; j++){
            if(mat[i][j] != 0){
                p = mat[i][j];
                cont[p]++;
            }
        }
    }


    for(i=1; i < 10; i++){
        if (cont[i] == 0){
            printf("\nPossível: %d\n",i);
        }
    }
}

/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-*/

int main(){
    int lin, col;
	int mat[N][N] = 
			{
             {0,1,9,0,4,8,3,0,7},
		     {5,0,4,3,6,0,0,1,2},
			 {0,3,8,7,0,2,9,5,0},
			 {9,6,0,0,8,1,5,0,3},
			 {0,4,3,0,7,5,6,2,0},
			 {1,2,0,6,3,0,0,8,9},
			 {7,0,2,4,0,6,0,3,5},
			 {4,9,0,1,5,0,2,0,8},
			 {3,0,1,0,2,7,4,9,0}
            };		
	
	escreve_matriz(mat);
    printf("Digite a posicao: \n");
    scanf("%d %d", &lin, &col);
    sudoku(mat, lin, col);


	//sudoku(mat);
}