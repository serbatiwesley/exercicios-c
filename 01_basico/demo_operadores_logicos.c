
#include <stdio.h>

int main() {
    
    int x = 1;
    int y = 3;
    int z = 5;
    
    // Operador lógico AND (&)
    if (z > y & y > x) {
        printf("Z é maior que X e Y\n");
    } else {
        printf("tratar outras situações\n");
    }
    
    // Operador lógico OR (|)
    if (x == y | x == z) {
        printf("X é igual a Y ou Z\n");
    } else {
        printf("X não é igual a Y ou Z\n");
    }
    
    // Operador lógico NOT(!)
    if (!(x > y)) {
        printf("X não é maior que Y\n");
    } else {
        printf("X é maior que Y\n");
    }
    
    return 0;
}