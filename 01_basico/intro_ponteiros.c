
#include <stdio.h>

int main() {
    
    int temperatura = 44;
    
    int *ptr;
    
    ptr = &temperatura;
    
    printf("O valor da variável 'temperatura' é: %d", *ptr);

    return 0;
}
