#include <stdlib.h>
#include <string.h>

struct veiculos {
    int codigo;
    char modelo [50];
    float km_rodados;
    float consumo_medio;
};

float calcular_consumo(struct veiculos veiculo) {
    float total = veiculo.km_rodados / veiculo.consumo_medio;
    return total;
}

void registrar_viagem (struct veiculos *veiculo, float km_percorridos) {
    float km_total = veiculo->km_rodados + km_percorridos;
    veiculo->km_rodados = km_total;
}

int main() {
    int quantidade = 0, codigo = 0;
    float km_percorridos = 0;

    printf("Informe quantos veículos deseja cadastrar: ");
    scanf("%d", &quantidade);
    //quantidade = 2;

    while (quantidade <= 0) {
        printf("Valor inválido! Tente novamente: ");
        scanf("%d", &quantidade);
        if (quantidade == 0) {
            printf("Digite 0 novamente para encerrar: ");
            scanf("%d", &quantidade);
            if (quantidade == 0) {
                printf("\nFim do Programa!");
                return 1;
            }
        }
    }

    struct veiculos *veiculo = malloc(quantidade * sizeof(struct veiculos));
    if (veiculo == NULL) {
        printf("Erro: memória insuficiente!\n");
        return 1;
    }
    /*veiculo[0].codigo = 101;
    strcpy(veiculo[0].modelo, "HB20");
    veiculo[0].km_rodados = 25000;
    veiculo[0].consumo_medio = 12.7;

    veiculo[1].codigo = 102;
    strcpy(veiculo[1].modelo, "Corolla");
    veiculo[1].km_rodados = 26457.45;
    veiculo[1].consumo_medio = 15;*/

    for (int i = 0; i < quantidade; i++) {
        printf("---Cadastro do %dº Veículo---\n", i + 1);
        printf("Informe o código: ");
        scanf("%d", &veiculo[i].codigo);
        printf("Informe o modelo: ");
        scanf("%s", veiculo[i].modelo);
        printf("Informe os KMs rodados: ");
        scanf("%f", &veiculo[i].km_rodados);
        printf("Informe o consumo médio (km/l): ");
        scanf("%f", &veiculo[i].consumo_medio);
    }

    printf("\n\n");

    //codigo = 101;
    //km_percorridos = 150;

    printf("Informe o código do veículo que viajou: ");
    scanf("%d", &codigo);
    printf("Quantos quilômetros percorreu? ");
    scanf("%f", &km_percorridos);

    for (int i = 0; i < quantidade; i++) {
        if (veiculo[i].codigo == codigo) {
            registrar_viagem(&veiculo[i], km_percorridos);
        }
    }

    for (int i = 0; i < quantidade; i++) {
        printf("---%dº VEÍCULO ---\n", i + 1);
        printf("Código: %d\n", veiculo[i].codigo);
        printf("Modelo: %s\n", veiculo[i].modelo);
        printf("Quilometragem: %.2f\n", veiculo[i].km_rodados);
        printf("Consumo total: %.2f litros\n", calcular_consumo(veiculo[i]));
        printf("\n");
    }

    free(veiculo);
    printf("\nFim do Programa!");
    return 0;
}