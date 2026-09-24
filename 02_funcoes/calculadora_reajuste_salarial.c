#include <stdio.h>


float calcularReajuste(float salarioAtual, float percentualReajuste) {
    float reajuste = (salarioAtual * percentualReajuste) / 100;
    return salarioAtual + reajuste;
}

int main() {
    
    float salarioAtual, percentualReajuste;
    
    printf("Informe o salário a ser reajustado: ");
    scanf("%f", &salarioAtual);
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
    float novoSalario = calcularReajuste(salarioAtual, percentualReajuste);
    
    printf("\nO novo salário é R$ %.2f", novoSalario);
    
    return 0;
}