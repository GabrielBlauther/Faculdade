#include <stdio.h>

int main(){
    int vitorias[20], empates[20], codigo[20], derrotas[20], pontos[20];
    int i, aux, trocou;

    // Leitura dos dados
    for(i = 0; i < 20; i++){
        printf("Time %d:\n", i+1);
        printf("Codigo: ");
        scanf("%d", &codigo[i]);
        printf("Vitorias: ");
        scanf("%d", &vitorias[i]);
        printf("Empates: ");
        scanf("%d", &empates[i]);
        printf("Derrotas: ");
        scanf("%d", &derrotas[i]);

        // Calcular pontos
        pontos[i] = vitorias[i] * 3 + empates[i] * 1;
    }

    // Ordenação (bubble sort)
    trocou = 1;
    while(trocou == 1){
        trocou = 0;
        for(i = 0; i < 19; i++){
            // Se o próximo tem mais pontos OU (mesmos pontos E mais vitórias)
            if(pontos[i] < pontos[i+1] || (pontos[i] == pontos[i+1] && vitorias[i] < vitorias[i+1])){
                // Troca pontos
                aux = pontos[i];
                pontos[i] = pontos[i+1];
                pontos[i+1] = aux;

                // Troca vitórias
                aux = vitorias[i];
                vitorias[i] = vitorias[i+1];
                vitorias[i+1] = aux;

                // Troca empates
                aux = empates[i];
                empates[i] = empates[i+1];
                empates[i+1] = aux;

                // Troca derrotas
                aux = derrotas[i];
                derrotas[i] = derrotas[i+1];
                derrotas[i+1] = aux;

                // Troca código
                aux = codigo[i];
                codigo[i] = codigo[i+1];
                codigo[i+1] = aux;

                trocou = 1;
            }
        }
    }

    printf("\nClassificacao:\n");
    for(i = 0; i < 20; i++){
        printf("%d. Codigo: %d - Pontos: %d - Vitorias: %d\n",
               i+1, codigo[i], pontos[i], vitorias[i]);
    }

    return 0;
}
