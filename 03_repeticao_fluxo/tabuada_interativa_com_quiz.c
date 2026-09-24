
#include <stdio.h>

int main() {
    
    char opcao;
    
    
    do {
        int num, duv, resp, falt;
        
        puts("\n----------------------------------------");
        
        printf("Informe um valor para que se faça a tabuada: ");
        scanf("%d", &num);
    
        printf("Informe um valor para ser o que faltará na tabuada: ");
        scanf("%d", &duv);
    
        for (int i = 1; i <=10; i++) {
            if (i == duv) {
                printf("%d x %d = __\n", num, duv);
                continue;
            }
        
            printf("%d x %d = %d\n", num, i, num*i);
        }
    
        falt = num * duv;
    
        printf("Qual o resultado da multiplicação de %d por %d? ", num, duv);
        scanf("%d", &resp);
    
        while (resp != falt) {
            printf("Resposta incorreta! Tente novamente: ");
            scanf("%d", &resp);
        }
    
        printf("\nResposta correta! Avance para o próximo número.\n");
        
        printf("\nDeseja praticar outra tabuada? (S/N)\n");
        scanf(" %c", &opcao);
        
    } while (opcao == 'S' || opcao == 's');
    
    
    printf("\nFim do Programa!");

    return 0;
}
