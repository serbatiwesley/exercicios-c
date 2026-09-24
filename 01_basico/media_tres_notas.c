#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    float n1, n2, n3, media;
    
    printf("Primeira nota: ");
    scanf("%f", &n1);
    printf("Segunda nota: ");
    scanf("%f", &n2);
    printf("Terceira nota: ");
    scanf("%f", &n3);
    
    printf("\nPrimeira nota: %.2f / Segunda nota: %.2f / Terceira nota: %.2f\n\n", n1, n2, n3);
    
    media = (n1 + n2 + n3)/3;
    
    printf("A média das notas é %.2f", media);
    
    printf("Fim do Programa!")

    return 0;

}