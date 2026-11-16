/*
8)  Considerando um tipo chamado ALUNOS definido conforme o tipo estruturado a seguir:

struct alunos {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
};
typedef struct alunos ALUNOS;

Faça um programa que leia os dados relativos a N alunos (o valor N é definido pela diretiva #define). 
Os dados referentes aos alunos devem ser armazenados em um vetor de dados do tipo ALUNOS. 
Ao final o programa deverá exibir o nome e a média aritmética do aluno com a menor e com a maior média. 
Deve ser criada uma função que receba o vetor de ALUNOS e retorne os dois alunos com a menor e com a maior média.

Protótipo da função:

void menor_maior_medias(ALUNOS vet[N], ALUNOS *menor, ALUNOS *maior)
*/