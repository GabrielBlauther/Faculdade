/*
 Exercício Zero) O supermercado precisa de um programa em
Linguagem C para informar o valor total a ser pago pelos produtos comprados
pelos clientes. O programa deve calcular e mostrar na tela o valor gasto por cada
cliente e ao final o valor total gasto por todos os clientes e mais o valor médio
por cliente. Cada cliente pode comprar diversos produtos e o Supermercado
atende diversos clientes. É necessário ler um código numérico para o cliente
(inteiro) e o valor de cada produto (decimal) que foi comprado por ele. Quando o
valor do produto for menor ou igual a zero deve parar de solicitar os preços dos
produtos para aquele cliente. Quando o código do cliente for menor ou igual a
zero deve parar de solicitar os produtos comprados. Dica: Para cada cliente são
solicitados diversos produtos. O supermercado também incluiu uma política de
desconto em que quando o valor total do cliente ultrapassar R$ 1.099 deve ser
aplicado um desconto de 1%. Depois de informar o valor médico por cliente
também informar quanto foi oferecido de desconto aos clientes
*/

#include <stdio.h>

int main (){
    int cliente,cont=0;
    float produto, media=0, totalCliente=0, totalGasto=0,desconto=0,totalDesconto=0;

    while(1){
        printf("\nDigite o codigo do cliente(0 para parar o programa): ");
        scanf("%d",&cliente);
        if(cliente == 0) break;
        totalCliente=0;
        while(1){
            printf("\nDigite o valor do produto: ");
            scanf("%f",&produto);
            totalCliente+=produto;
            totalGasto+=produto;
            cont++;
            if(produto <= 0) break;
        }
        if (totalCliente > 1099)
            desconto =(totalCliente * 0.01);
            totalDesconto += totalCliente - desconto;
        printf("\nGasto do Cliente de codigo %d foi de %.2f",cliente,totalCliente);
    }
    media= totalGasto / cont;
    printf("\n A media de gasto foi de %.2f e o gasto total dos clientes foi de %2.f R$ e com o desconto ficou o total com %2.f R$",media,totalGasto,totalDesconto);
}