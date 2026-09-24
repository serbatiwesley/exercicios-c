
#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int resultado = i * j;
            printf("%d x %d = %d\n", i, j, resultado);
        }
        printf("\n");
    }
    
    
    printf("Fim do Programa!");
    
    return 0;
}
