#include <stdio.h>

void somarVetor(int *vetor, int tamanho, int *resultado) {
    if (tamanho == 0) return;
    *resultado = *resultado + vetor[0];
    somarVetor(vetor + 1, tamanho - 1, resultado);
}

int main() {
    
    int numeros[] = {1, 2, 3, 4, 5};
    int soma = 0;
    
    somarVetor(numeros, 5, &soma);
    
    printf("Soma: %d", soma);
    
    printf("\n Fim do Programa!");

    return 0;
}
