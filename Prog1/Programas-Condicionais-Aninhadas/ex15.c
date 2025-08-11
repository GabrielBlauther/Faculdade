/* 15) Desenvolva um programa que solicite ao usuário informar o número inteiro referente a matrícula de
um aluno e quatro valores reais que correspondam as quatro provas do aluno. O programa deverá
calcular a média aritmética considerando apenas as três melhores notas. No final, o programa deverá
mostrar na tela o número da matrícula do aluno, a média calculada e a mensagem " Aprovado" se a
média for maior ou igual a 6 e "Reprovado" se a média for menor que 6.
Por exemplo, se o valores digitados forem 345 para a matrícula do aluno e 9, 9.5, 7, e 8 para as
notas, a média será (9 + 9.5 + 8)/3 (a prova de nota 7 é descartada), o programa deverá mostrar na tela:
Código do aluno: 345
Média: 8,33
Aprovado!
Dica:Não esqueça de considerar a possibilidade de ocorrerem notas iguais.*/

#include <stdio.h>

int main(){
  float n1,n2,n3,n4,aux,media;
  int matricula;

  printf("Digite o numero da matricula: ");
  scanf("%d",&matricula);
  printf("Digite as 4 notas da prova:\n");
  scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

  if(n1 > n2){
    aux = n1;
    n1 = n2;
    n2 = aux;
  }if(n1 > n3){
    aux = n1;
    n1 = n3;
    n3 = aux;
  }if(n1 > n4){
    aux = n1;
    n1 = n4;
    n4 = aux;
  }if(n2 > n3){
    aux = n2;
    n2 = n3;
    n3 = aux;
  }if(n2 > n4){
    aux = n2;
    n2 = n4;
    n4 = aux;
  }if(n3 < n4){
    aux = n3;
    n3 = n4;
    n4 = aux;
  }
  media = (n4+n3+n2)/3;
  printf("Código do aluno:%d\nMédia:%.2f\n",matricula,media);
  if(media >= 6){
    printf("APROVADO\n");
  }else
    printf("REPROVADO\n");

 return(0);
}