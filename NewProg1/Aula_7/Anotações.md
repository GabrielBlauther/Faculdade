Começamos a aula contextualizando sobre Bits e Bytes(8 bits)
1 byte armazena um número ou um caractere, usamos a tabela ASCII para encontrar o valor do respectivo caractere
Computador não armazena caractere, armazena número.

##Aula 7 -> Strings (Vetores de caracteres)

    diferenças de aspas simples e duplas
    Simples -> Caractere (a,b,c...)
    duplas -> strings (vetores de caracteres, "arara")

    Um dos erros que encontramos ao tentar ler um caracter após ter solicitado um outro dado, é que ele lê o ENTER como caracter também "\n", sendo assim precisamos limpar esta entrada, para windowns usamos o fflush() para linux usamos a que esta no codigo de conceitos.

    stdin -> dados de entrada
    stdout -> dados de saída

    str2[j++] -> esta sintax simplifica os comandos pois ele usa o valor atual e depois de finalizar a linha ele incrementa
        se eu quiser incrementar antes faço: str2[++j]

    para fazermos um for que percorre toda uma string queremos percorrer até o \0 na tabela ascii ele é o 0 que para o C é equivalente ao falso, seguindo o formato do for(inicio, condição, incremento), então a string quando chega no \o ela é falso e falso é o valor que sai do for, então usando uma sintax como for(i = 0; str[i]; i++) assim ele vai incrementar I até o fim da string, sabemos o TAMANHO da string.
