#include <stdio.h>
#include <stdlib.h>

int main() {

    int quantidade = 0, funciona = 0, c = 0;
    float *notas = NULL;
    float soma = 0, media = 0;

    printf("Informe quantas notas deseja cadastrar: [0 para encerrar] ");
    while ((funciona = scanf("%d", &quantidade)) != 1 || quantidade <= 0) {
        if (funciona == 1 && quantidade == 0) {
            printf("\nEncerrando o programa!");
            return 0;
        }
        printf("ERRO: Digite um número superior a zero.\nTente novamente: ");
        while ((c = getchar()) != '\n' && c != EOF);
    };

    notas = (float *) malloc(quantidade * sizeof(float));
    if (notas == NULL) {
        printf("\nERRO: Memória insuficiente.");
        return 1;
    }
    
    printf("\n");

    for (int i = 0; i < quantidade; i++) {
        printf("Informe a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\n");

    for (int i = 0; i < quantidade; i++) {
        printf("%dº NOTA: %.2f\n", i + 1, notas[i]);
        soma += notas[i];
    }

    printf("\nA soma de todas as notas é: %.2f\n", soma);
    media = soma / quantidade;
    printf("A média das notas é %.2f.\n", media);
    
    free(notas);
    printf("\nFim do Programa!");

    return 0;
}