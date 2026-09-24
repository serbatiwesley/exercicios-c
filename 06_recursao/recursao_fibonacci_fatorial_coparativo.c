#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

long long int fatorial1(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fatorial1(n - 1);
}

long long int fatorial_tail (int n, int resultado) {
    if (n == 0) {
        return resultado;
    } else {
        return fatorial_tail(n - 1, n * resultado);
    }
}

long long int fatorial2 (int n) {
    return fatorial_tail(n, 1);
}

int main() {
    
    int termo = 6;
    int numero = 5;
    
    printf("O %dº termo da sequência de Fibonacci é: %d\n", termo, fibonacci(termo));
    printf("O fatorial comum de %d é: %d\n", numero, fatorial1(numero));
    printf("O fatorial em cauda de %d é: %d\n", numero, fatorial2(numero));
    
    printf("\nFim do Programa!");

    return 0;
}