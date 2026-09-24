#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    char nome[100];
    int bilhete, idade, resposta;
    bool assistente;
    
    //Informações
    printf("Nome do passageiro: ");
    scanf(" %99[^\n]", nome);
    
    printf("Informe o número do bilhete: ");
    scanf(" %d", &bilhete);
    
    printf("Informe sua idade: ");
    scanf(" %d", &idade);
    
    printf("Necessita de assistente especial? [Sim = 1] [Não = 0]: ");
    
    //    Se o valor for letra,              Se for número, ele permanece
    //    retorna 0 que é diferente de 1.    enquanto for diferente de 0 e 1.
    while(scanf("%d", &resposta) != 1 || (resposta != 0 && resposta != 1)) {
        printf("Resposta incorreta, digite apenas '1' ou '0'.\n");
        
        //Limpa o buffer pra refazer a pergunta
        while (getchar() != '\n');
    }
    
    assistente = resposta;
    
    printf("Seu nome é %s\n", nome);
    printf("Sua idade é %d\n", idade);
    
    if (idade >= 18) {
        printf("É maior de idade\n");
    } else {
        printf("Não é maior de idade\n");
    }    
    
    printf("Necessita de assistente especial? %s\n",
        assistente ? "Sim" : "Não");
        
    return 0;

}