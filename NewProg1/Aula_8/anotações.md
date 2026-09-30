Aula dia 29/09/2026

Na aula de hoje iniciamos vendo o exercicio sobre palindromos.

diferença de letras maiusculas e minusculas é 32 A = 41 a = 97 (Tabela ASCII)
Fois usado uma tabela de binarios para mostrar que uma letra a diferença de maiuscula para minuscula basta trocar o bit 32 de 0 para 1

Ex:
128 64 32 16 8 4 2 1
0 1 _1_ 0 0 0 1 1 = a

128 64 32 16 8 4 2 1
0 1 _0_ 0 0 0 1 1 = A

Como converter um caracter de número para numero ( '1' -> 1 ), fazemos o calculo pela tabela ascii diminuimos o valor do caracter por 48 por exemplo o 9 é 57 se diminuirmos por 48 temos o 9 novamente, e o 48 é igual ao caracter '0' então podemos fazer o seguinte sti[i] - '0' ( ele pega o valor que ta neste local do vetor e diminui por 48 e isso retorna o número ao invés do caracter do número.)
este exemplo esta no primeira parte da aula 8
