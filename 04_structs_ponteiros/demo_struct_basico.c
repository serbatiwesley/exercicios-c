
#include <stdio.h>
#include <string.h>

//Declarando um struct
struct Aluno {
    
    char nome[100];
    int idade;
    float mediaNotas;
    
};

int main() {
    
    //Chamando um struct
    struct Aluno aluno1;
    
    //Utilizando um struct
    strcpy(aluno1.nome, "Anderson");
    aluno1.idade = 20;
    aluno1.mediaNotas = 9.8;
    
    //Imprimindo um struct
    printf("Nome........: %s\n", aluno1.nome);
    printf("idade.......: %d\n", aluno1.idade);
    printf("Média.......: %.2f\n", aluno1.mediaNotas);
    
    printf("Fim do Programa!");

    return 0;
}
