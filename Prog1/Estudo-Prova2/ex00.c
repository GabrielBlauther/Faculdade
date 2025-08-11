/* O número da Agência do Banco Bradesco é formado por 4 dígitos, mais um dígito
verificador (DV). Para obter o DV da agência, multiplica-se os 4 dígitos da agência pelos multiplicadores
5,4,3,2 nesta ordem. Por exemplo, para a agência 1425 tem-se:
1425
*5*4*3*2
516610
DV
Os valores são somados 5 + 16 + 6 + 10 = 37.
O DV da Agência é calculado a partir da resto da divisão dos valores somados por 11. Se o resto
for 10 então o DV é P. Se o Resto for 0 então o DV é 0. Caso, contrário o DV é calculado através de 11 –
Resto. Por exemplo, para o valor somado de 37 tem-se que o resto por 11 é igual a 4. Desta forma, o dígito
verificador é igual a 11 – 4 = 7.
Faça um programa que leia o número de uma agência do Banco Bradesco (em uma única variável)
e, após o programa deverá escrever dígito verificador (DV).*/

#include <stdio.h>

int main() {
    int agencia, dig1, dig2, dig3, dig4;
    int soma, resto, dv;

    printf("Digite o número da agência (4 dígitos): ");
    scanf("%d", &agencia);

    // Garantir que o número tem 4 dígitos
    if (agencia < 1000 || agencia > 9999) {
        printf("Número de agência inválido!\n");
        return 1;
    }

    // Separação dos dígitos
    dig1 = agencia / 1000;
    dig2 = (agencia / 100) % 10;
    dig3 = (agencia / 10) % 10;
    dig4 = agencia % 10;

    // Cálculo da soma ponderada
    soma = (dig1 * 5) + (dig2 * 4) + (dig3 * 3) + (dig4 * 2);

    // Cálculo do DV
    resto = soma % 11;
    if (resto == 10) {
        printf("O dígito verificador é: P\n");
    } else if (resto == 0) {
        printf("O dígito verificador é: 0\n");
    } else {
        dv = 11 - resto;
        printf("O dígito verificador é: %d\n", dv);
    }

    return 0;
}
