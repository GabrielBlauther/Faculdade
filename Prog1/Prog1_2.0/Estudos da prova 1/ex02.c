/*
Os veículos que trafegam na rodovia são identificados através de um código numérico de 9 dígitos.
O primeiro digito é referente ao tipo de veículo, o segundo e terceiro são o código da região e os demais dígitos representam o código do cliente.
Por exemplo: para o código 123456789 sabemos que o tipo do veículo é 1 na região 23 e o código do cliente é 456789.
Desenvolva um programa em linguagem C que faça a leitura do código em uma única variável inteira e identifique o tipo do veículo,
o código da região e o código do cliente
*/

#include <stdio.h>

int main(){
  int cod,tipo_veiculo, cod_região, cod_cliente;

  printf("Digite o codigo: ");
  scanf("%d",&cod);

  tipo_veiculo = cod / 100000000;        // Primeiro dígito
  cod_região = (cod / 1000000) % 100;    // 2º e 3º dígitos
  cod_cliente = cod % 1000000;           // Últimos 6 dígitos

  printf("Tipo do veiculo: %d\n", tipo_veiculo);
  printf("Codigo da regiao: %d\n", cod_região);
  printf("Codigo do cliente: %d\n", cod_cliente);

}