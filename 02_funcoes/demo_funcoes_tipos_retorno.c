
#include <stdio.h>
#include <stdlib.h>

void saudacao() {
    printf("Olá, mundo!\n");
}

int soma(int a, int b) {
    return a + b;
}

double divisao(double x) {
    x = x / 2;
    return x;
}

int* aloca_memoria() {
    int *ponteiro = (int *)malloc(sizeof(int));
    *ponteiro = 10;
    return ponteiro;
}

int main() {
    
    saudacao();

    int valor2 = soma(3, 5);
    printf("%d\n", valor2);
    
    double valor1 = divisao(5.63);
    printf("%.3f\n", valor1);
    
    int *ptr = aloca_memoria();
    printf("Valor alocado dinamicamente: %d\n", *ptr);
    free(ptr);
    
    printf("\nFim do Programa!");

    return 0;
}