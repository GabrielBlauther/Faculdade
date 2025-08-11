/*20) Desenvolva um programa que solicite ao usuário digitar as três dimensões (largura, comprimento e
altura) de duas caixas. O programa deve verificar se a primeira caixa pode ser colocada dentro da
segunda caixa. Para que uma caixa caiba na outra, cada dimensão da primeira caixa deve ser menor
(não pode ser igual ou maior) que a dimensão correspondente na segunda caixa. Após realizar a
verificação, mostrar na tela uma mensagem se é possível ou não colocar a primeira caixa dentro da
segunda. Neste programa, considere que as caixas não podem ser rotacionadas em nenhuma direção.
Exemplo: Se as dimensões informadas para a primeira caixa forem 15 de largura, 20 de
comprimento e 10 de altura e as dimensões informadas para a segunda caixa forem 18 de largura, 25
de comprimento e 15 de altura, a primeira caixa pode ser colada dentro da segunda caixa, pois todas as
medidas da primeira caixa são menores que a da segunda caixa: comprimento (20<25), largura (15<18)
e altura (10<15). Neste caso a mensagem “A primeira caixa pode ser colocada dentro da segunda
caixa” deve ser exibida na tela.*/
#include <stdio.h>

int main() {
    int largura1, comprimento1, altura1;
    int largura2, comprimento2, altura2;

    // Solicita as dimensões da primeira caixa
    printf("Digite as dimensões da primeira caixa (largura, comprimento, altura): ");
    scanf("%d %d %d", &largura1, &comprimento1, &altura1);

    // Solicita as dimensões da segunda caixa
    printf("Digite as dimensões da segunda caixa (largura, comprimento, altura): ");
    scanf("%d %d %d", &largura2, &comprimento2, &altura2);

    // Verifica se a primeira caixa pode ser colocada dentro da segunda
    if (largura1 < largura2 && comprimento1 < comprimento2 && altura1 < altura2) {
        printf("A primeira caixa pode ser colocada dentro da segunda caixa.\n");
    } else {
        printf("A primeira caixa NÃO pode ser colocada dentro da segunda caixa.\n");
    }

    return 0;
}
