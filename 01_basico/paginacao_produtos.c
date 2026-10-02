#include <stdio.h>

int main() {

    int total_produtos, produtos_pagina, funciona, c, produto = 1;

    printf("Informe a quantidade de produtos a serem paginados: [Digite 0 para encerrar] ");
    while ((funciona = scanf("%d", &total_produtos)) != 1 || total_produtos <= 0) {
        if (funciona == 1 && total_produtos == 0) {
            printf("\nEncerrando o programa!");
            return 0;
        }
        printf("ERRO: Digite um número superíor a zero.\nTente novamente: ");
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\nInforme a quantidade de produtos por página: ");
    while ((funciona = scanf("%d", &produtos_pagina)) != 1 || produtos_pagina <= 0) {
        printf("ERRO: Digite um número superior a zero.\nTente novamente: ");
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    int numero_pagina = 1;
    while (produto <= total_produtos) {
        printf("\n--- %dº Página ---\n", numero_pagina);
        int exibidos = 0;
        while (exibidos < produtos_pagina && produto <= total_produtos) {
            printf("%dº produto\n", produto);
            exibidos++;
            produto++;
        }
        numero_pagina++;
    }

    printf("\nFim do Programa!");

    return 0;
}
