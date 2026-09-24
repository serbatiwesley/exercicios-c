#include <stdio.h>

struct produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

float calcularValorTotal(struct produto p) {
    return p.quantidade * p.preco;
};

void aplicarDesconto (struct produto *p, float percentual){
    float novo_preco = p->preco - (p->preco * percentual) / 100;
    p->preco = novo_preco;
}

int main(void) {
    int quantidade = 0;
    struct produto produtos[10];

    printf("Informe quantos produtos deseja cadastrar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("\n--- %dº PRODUTO ---\n", i+1);
        printf("Digite o Código do Produto: ");
        scanf("%d", &produtos[i].codigo);
        printf("Digite o Nome do Produto: ");
        scanf("%s", produtos[i].nome);
        printf("Digite a Quantidade do Produto em Estoque: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Digite o Preço do Produto: ");
        scanf("%f", &produtos[i].preco);
        printf("--- Fim do Produto ---\n");
    }

    for (int i = 0; i < quantidade; i++) {
        float desconto = 0;
        printf("\n--- %dº PRODUTO ---\n", i+1);
        printf("Código: %d\nProduto: %s\nQuantidade: %d\nPreço Atual: %.2f\n", produtos[i].codigo, produtos[i].nome, produtos[i].quantidade, produtos[i].preco);
        printf("\nO valor total do estoque é R$ %.2f\n", calcularValorTotal(produtos[i]));
        printf("\nDigite o Percentual de Desconto para esse Produto: ");
        scanf("%f", &desconto);
        aplicarDesconto(&produtos[i], desconto);
        printf("\nO novo preço do produto será R$ %.2f", produtos[i].preco);
        printf("\nValor total do estoque após desconto: R$ %.2f", calcularValorTotal(produtos[i]));
        printf("\n--- Fim do Produto ---\n");
    }

    printf("\n\nFim do Programa!");
}