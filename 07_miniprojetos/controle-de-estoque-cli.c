
#include <stdio.h>

int main() {
    
    int quantidadeAtual = 100;
    int quantidadeMinima = 50;
    
    while (quantidadeAtual > quantidadeMinima) {
        printf("Quantidade Atual: %d\n", quantidadeAtual);
        printf("Digite a quantidade a ser atualizada (ou 0 para sair): ");
        
        int atualizacao;
        scanf("%d", &atualizacao);
        
        if (atualizacao != 0) {
            quantidadeAtual += atualizacao;
            printf("A quantidade atualizada é: %d.\n", quantidadeAtual);
        } else {
            printf("Saindo do Controle de Estoque.\n");
            break;
        }
    }
    
    printf("\nFim do Programa!");
    
    return 0;
}
