
#include <stdio.h>

int main() {
    
    int cont = 1, j = 1;
    
    // While
    printf("Comando While:\n");
    while (cont <= 5) {
        printf("%dº - Wesley\n", cont);
        cont++;
    }
    
    // For
    printf("\nComando For:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%dº - Wesley\n", i);
    }
    
    // Do... While
    printf("\nComando Do... While:\n");
    do {
        printf("%dº - Wesley\n", j);
        j++;
    } while (j <= 5);
    
    printf("\nFim do Programa!");

    return 0;
}