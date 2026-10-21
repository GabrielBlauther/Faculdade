//segunda parte da aula

#include <stdio.h>
#include <stdio_ext.h> //para tirar o enter

#define N 4


/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/
struct data{
    int d,m,a;
};
typedef struct data DATA;
/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/


/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/
struct livro {
    char nome[50];
    char autor[50];
    int edicao[3]; // dia, mês e ano
};
typedef struct livro LIVRO; //nome da struct e o alias que dou para ela para não ter que usar struct data ao chamar a mesma em outras estruturas
/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/


void le_livros(LIVRO v[N]){ //struct é o mesmo que o tipo (int, float, double e etc...)
    int i;
    for(i=0; i<N; i++){
        printf("Digite o nome do livro:\n");
        gets(v[i].nome);
        printf("Digite o nome do autor:\n");
        gets(v[i].autor);
        printf("Digite a data de edicao: \n");
        scanf("%d %d %d", &v[i].edicao[0], &v[i].edicao[1], &v[i].edicao[2]);
        __fpurge(stdin);//precisamos deste comando para tirar o enter ao digitar a data, para este C uso assim para outros posso usar a lib #include <stdin.h> e a função fica fflush(stdin)

    }
}


/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/
void escreve_livros(LIVRO v[N]){
    int i;

    for(i = 0; i<N; i++){
        printf("\n");
        printf("-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--\n");
        printf("Nome do %dº livro: %20s\n",i+1,v[i].nome);
        printf("Nome do autor do %dº livro: %11s\n",i+1,v[i].autor);
        printf("data de edição do %dº livro:    %02d/%02d/%02d \n",i+1,v[i].edicao[0], v[i].edicao[1], v[i].edicao[2]);
        printf("-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--\n");
        printf("\n");

    }
}


/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/
int compara(int d1[3], int d2[3]){

    int v1 = d1[2] * 10000 + d1[1] * 100 + d1[0];
    int v2 = d2[2] * 10000 + d2[1] * 100 + d2[0];

    return v1-v2; 

}
/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/


/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/
void ordena_livros(LIVRO v[N]){

    int i,j;
    LIVRO aux;

    for(i=0; i< N-1; i++){
        for(j=0; j<N-1-i; j++){
            if(compara(v[j].edicao, v[j+1].edicao) > 0){//usamos a função para mandar as datas na posição do vetor se o return for maior que zero logo a posição atual é aior que a posterior então precisamos trocar.
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

}
/*-=-=-=-=-=-=-=-=--=-=-=-=--=-=--=-=-=-=--=-=---=-=-=-=--=-=--*/


int main(){
    LIVRO v[N] = 
    {
        {"Teste_1", "Teste_1", {4,4,2024}},
        {"Teste_2", "Teste_2", {3,3,2024}},
        {"Teste_3", "Teste_3", {2,2,2024}},
        {"Teste_4", "Teste_4", {1,1,2024}}
    };

    //le_livros(v);
    ordena_livros(v);
    escreve_livros(v);
}