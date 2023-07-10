#include <stdio.h>

#define GREEN "\033[0;32m"
#define RESET "\033[0m"

struct AlunosLP
{
    char nome[30];
    int ra;
    int freq;
    float nota[3];
};

void Imprimir_menu()
{
    printf("------------------------------\n");
    printf(GREEN"\tSISTEMA UNIFESP\n"RESET);
    printf("------------------------------\n");
    printf("[1] Inserir Aluno\n");
    printf("[2] Consultar Aluno\n");
    printf("[3] Remover Aluno\n");
    printf("[4] Listar Turma\n");
    printf("[5] Sair\n");
}

int main()
{
    struct AlunosLP TurmaLP[5];

    Imprimir_menu();
    
}