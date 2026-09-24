#include <stdio.h>
#include <locale.h>

// 1. Definindo a estrutura que representa os dados de um caminhão
struct Caminhao {
    int id;               // Identificação do veículo
    float capacidadeTanque; // Volume em litros
    float precoCombustivel; // Preço do litro do combustível
};

// 2. Função Recursiva para calcular o custo total de abastecimento da frota
float calcularCustoTotal(struct Caminhao frota[], int totalCaminhoes, int indiceCaminhao, float custoTotalAnterior) {
    // Caso Base: se já percorremos todos os caminhões da frota
    if (indiceCaminhao >= totalCaminhoes) {
        return custoTotalAnterior;
    }
    
    // Calcula o custo de abastecimento do caminhão atual (Capacidade * Preço)
    float custoCaminhaoAtual = frota[indiceCaminhao].capacidadeTanque * frota[indiceCaminhao].precoCombustivel;
    
    // Soma o custo atual ao acumulador anterior
    float novoCustoAcumulado = custoTotalAnterior + custoCaminhaoAtual;
    
    // Chamada recursiva: avança para o próximo caminhão (indiceCaminhao + 1)
    return calcularCustoTotal(frota, totalCaminhoes, indiceCaminhao + 1, novoCustoAcumulado);
}

int main() {
    // Configura o terminal para aceitar acentuação em português
    setlocale(LC_ALL, "Portuguese");

    // Definindo o tamanho da frota
    int totalCaminhoes = 3;

    // 3. Criando o vetor de struct preenchendo os dados reais da frota
    struct Caminhao frota[3] = {
        {101, 300.0f, 5.80f}, // Caminhão 1: Tanque de 300L, Preço R$ 5.80/L
        {102, 450.0f, 6.10f}, // Caminhão 2: Tanque de 450L, Preço R$ 6.10/L
        {103, 250.0f, 5.80f}  // Caminhão 3: Tanque de 250L, Preço R$ 5.80/L
    };

    // 4. Chamada inicial da função recursiva
    // Iniciamos no índice 0 e com o acumulador de custo em 0.0
    float custoTotalGeral = calcularCustoTotal(frota, totalCaminhoes, 0, 0.0f);

    // 5. Exibição do Resultado Final
    printf("=========================================\n");
    printf("  RELATÓRIO DE ABASTECIMENTO DA FROTA\n");
    printf("=========================================\n");
    printf("O custo total de abastecimento para a frota é: R$ %.2f\n", custoTotalGeral);
    printf("=========================================\n");

    return 0;
}