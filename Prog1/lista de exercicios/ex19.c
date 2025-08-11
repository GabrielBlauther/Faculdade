/*19) Desenvolva um programa em C que solicite ao usuário informar um número inteiro qualquer que
possua no máximo 5 casas e que não seja maior que 99999. O programa em C deverá verificar
quantas vezes cada dígito, de 0 a 9, aparece no número e mostrar esta informação na tela.
Exemplo: se o valor informado foi 32412, o programa em C deve mostrar na tela o dígito 2
aparece 2 vezes no número e que os dígitos 3, 4 e 1 aparecem apenas uma vez.*/

#include <stdio.h>
main(){
    int num,resto;
    int d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
    printf("Informe um numero: ");
    scanf("%d",&num);
    while (num!=0){
        resto=num%10;
        switch(resto){
            case 0: d0++;
            break;
            case 1: d1++;
            break;
            case 2: d2++;
            break;
            case 3: d3++;
            break;
            case 4: d4++;
            break;
            case 5: d5++;
            break;
            case 6: d6++;
            break;
            case 7: d7++;
            break;
            case 8: d8++;
            break;
            case 9: d9++;
            break;
        }
        num/=10;
}
  printf("O digito 0 aparece %d vezes\n",d0);
  printf("O digito 1 aparece %d vezes\n",d1);
  printf("O digito 2 aparece %d vezes\n",d2);
  printf("O digito 3 aparece %d vezes\n",d3);
  printf("O digito 4 aparece %d vezes\n",d4);
  printf("O digito 5 aparece %d vezes\n",d5);
  printf("O digito 6 aparece %d vezes\n",d6);
  printf("O digito 7 aparece %d vezes\n",d7);
  printf("O digito 8 aparece %d vezes\n",d8);
  printf("O digito 9 aparece %d vezes\n",d9);

}

