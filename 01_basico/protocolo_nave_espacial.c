
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int combustivel;
    bool rota, tempestade;

    printf("Informe o combustível: ");
    scanf("%d", &combustivel);

    if (combustivel <= 20) {
        printf("|ALERTA| - Combustível abaixo de 20%%\n");
    } else {
        printf("Combustível em %d%%, siga com o protocolo!\n", combustivel);
    }
    
    puts("");
    
    printf("Confira a rota. Está correta? [1 - SIM] [0 - NÃO]\n");
    scanf("%d", &rota);
    
    if (rota == true) {
        printf("Rota correta, siga com protocolo!\n");
    } else {
        printf("Rota incorreta, protocolo de correção iniciado!\n");
    }
    
    puts("");
    
    printf("Verifique o radar, há previsão de tempestade solar? [1 - SIM] [0 - NÃO]\n");
    scanf("%d", &tempestade);
    
    if (tempestade == true) {
        printf("Tempestade próxima, ativando protocolo de proteção!\n");
    } else {
        printf("Sem previsão de tempestade, siga com a rota!\n");
    }
    
    printf("\nFim do Programa!");

    return 0;
}
