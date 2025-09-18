/*
Uma rodovia possui um sistema de pedágio automatizado que cobra tarifas de acordo com o tipo de veículo e a distância percorrida. As tarifas e os descontos são representados nas tabelas:
Desenvolver um programa em linguagem C para calcular o valor do pedágio que deve ser pago. O programa deve receber como entrada o código do veículo e a distância percorrida em quilômetros.
Caso o código informado seja inválido, o programa não realiza nenhum cálculo e deve exibir a mensagem: "Código de veículo inválido."
*/

#include <stdio.h>

int main(){
  int cod, distancia;
  float valor;

  printf("Digite o codigo do veiculo e os km rodados: ");
  scanf("%d%d",&cod,&distancia);

  if(cod >= 1 && cod <= 5){
    printf("\nTipo de veiculo: %d",cod);
    printf("\nDistancia percorrida: %d",distancia);
    
    float tarifa = cod * 0.10;  // 0.10, 0.20, 0.30, 0.40, 0.50
    valor = distancia * tarifa;
    
    if(distancia >= 200 && distancia <= 999){
      valor = valor - (distancia * 0.03);
    }else if(distancia > 999){
      valor = valor - (distancia * 0.05);
    }
    
    printf("\nValor Total: %.2f",valor);
  }else
    printf("Codigo invalido");
}