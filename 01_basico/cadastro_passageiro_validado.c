#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

void limpa_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void precisa_assistencia (char c) {
    if (toupper (c) == 'S') {
        printf("-> Necessita de assistente.\n");
    } else {
        printf("-> Não necessita de assistente.\n");
    }
}

struct passageiros {
    char nome[100];
    int bilhete;
    int idade;
    char resposta;
};

int main() {

    int quantidade = 0;
    
    printf("Informe quantos passageiros deseja cadastrar: ");
    while (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("ERRO: Digite apenas um número positivo diferente de zero.\n");
        printf("Tente novamente: ");
        limpa_buffer();
    };
    limpa_buffer();

    printf("\n");
    
    struct passageiros *passageiro = malloc(quantidade * sizeof(struct passageiros));
    if (passageiro == NULL) {
        printf("ERRO: Memória insuficiente!");
        return 1;
    }
    
    for (int i = 0; i < quantidade; i++) {
        printf("---Cadastro do %dº passageiro ---\n", i + 1);
        printf("Nome do passageiro: ");
        scanf("%99[^\n]", passageiro[i].nome);
        limpa_buffer();
        
        printf("Informe o número do bilhete: ");
        while (scanf("%d", &passageiro[i].bilhete) != 1 || passageiro[i].bilhete <= 0) {
            printf("ERRO: Digite apenas números positívos diferente de 0.\n");
            printf("Tente novamente: ");
            limpa_buffer();
        };
        limpa_buffer();
        
        printf("Informe a idade do passageiro: ");
        while (scanf("%d", &passageiro[i].idade) != 1 || passageiro[i].idade <= 0) {
            printf("ERRO: Digite apenas números positívos diferente de 0.\n");
            printf("Tente novamente: ");
            limpa_buffer();
        };
        limpa_buffer();
        
        do {
            printf("Necessita de assistente especial? [S/N] ");
            scanf("%c", &passageiro[i].resposta);
            passageiro[i].resposta = toupper(passageiro[i].resposta);
            limpa_buffer();
            if (passageiro[i].resposta != 'S' && passageiro[i].resposta != 'N') {printf("ERRO: Digite apenas [S] ou [N].\n");}
        } while (passageiro[i].resposta != 'S' && passageiro[i].resposta != 'N');

        printf("\n");
    }
    
    for (int i = 0; i < quantidade; i++) {
        printf("---Informações do %dº passageiro ---\n", i + 1);
        printf("Nome: %s\n", passageiro[i].nome);
        printf("Bilhete: %d\n", passageiro[i].bilhete);
        printf("Idade: %d\n", passageiro[i].idade);
        if (passageiro[i].idade >= 18) {
            printf("-> Maior de idade.\n");
        } else {
            printf("-> Menor de idade.\n");
        }
        precisa_assistencia(passageiro[i].resposta);
        printf("\n");
    }
    
    free(passageiro);
        
    return 0;
}