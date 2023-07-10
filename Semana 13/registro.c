#include <stdio.h>

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
    printf("\tSISTEMA UNIFESP\n");
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