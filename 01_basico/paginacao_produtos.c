
#include <stdio.h>

int main() {
    
    int totalprod = 30;
    int prodpagina = 5;
    int cont = 1;
    int numpag = 1;
    
    while (cont <= totalprod) {
        printf("\n------ %dº Página ------\n", numpag);
        int exib = 1;
        
        while (exib <= prodpagina && cont <= totalprod) {
            printf("Produto %d\n", cont);
            
            cont++;
            exib++;
        }
        
        numpag++;
    }
    
    printf("\nFim do Programa!");

    return 0;
}
