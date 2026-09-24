#include <stdio.h>
#include <stdlib.h>

int main () {

    int capacidade = 2;
    int preenchido = 0;

    int *vetor = (int *) malloc(capacidade * sizeof(int));

    printf("Digite vários números: [Informe '-1' para encerrar]\n");
    for (int i = 0; i < capacidade; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] == -1) {
            break;
        }
        preenchido++;
        if (preenchido == capacidade) {
            capacidade = capacidade * 2;
            int *temp = (int *) realloc(vetor, capacidade * sizeof(int));
            if (temp == NULL) {
                printf("Memória Insuficiente!");
                return 1;
            } else {
                vetor = temp;
            }
        }
    }

    for (int i = 0; i < preenchido; i++) {
        printf("%dº posição: %d\n", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}