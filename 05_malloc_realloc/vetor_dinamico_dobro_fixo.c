#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Quantos números você quer digitar? ");
    scanf("%d", &n);

    int *vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: MEMÓRIA INSUFICIENTE\n");
        return 1;
    }

    n = n * 2;

    int *temp = realloc(vetor, n * sizeof(int));

    if (temp == NULL) {
        printf("Erro ao realozar\n");
    } else {
        vetor = temp;
    }

    for(int i = 0; i < n; i++) {
        printf("Digite o número %dº: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int soma = 0;
    for(int i = 0; i < n; i++) {
        soma += vetor[i];
    }

    printf("Soma: %d\n", soma);

    free(vetor);

	return 0;
}
