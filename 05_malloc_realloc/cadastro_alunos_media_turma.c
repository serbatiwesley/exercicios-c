#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[50];
    float nota;
};

int main () {
    int quantidade = 0;
    float soma = 0, media = 0;

    printf("Informe quantos alunos deseja cadastrar: ");
    scanf("%d", &quantidade);
    
    while (quantidade <= 0) {
        printf("Informe um número válido: [0 PARA ENCERRAR]");
        scanf("%d", &quantidade);

        if (quantidade == 0) {
            printf("\n\nFim do Programa!");
            return 1;
        }
    }

    struct aluno *turma = malloc(quantidade * sizeof(struct aluno));

    for (int i = 0; i < quantidade; i++) {
        printf("Informe o nome do %dº aluno: ", i + 1);
        scanf("%s", turma[i].nome);
        printf("Informe a nota do aluno: ");
        scanf("%f", &turma[i].nota);
        soma += turma[i].nota;
    }

    printf("A média da turma é: %.2f", media = soma / quantidade);

    free(turma);

    printf("\n\nFim do Programa!");
    return 0;
}