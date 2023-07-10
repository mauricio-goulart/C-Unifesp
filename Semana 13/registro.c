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
    printf("------------------------------\n");
    printf("Digite sua opção: ");
}

void Inserir_aluno(struct AlunosLP TurmaLP[], int n)
{
    printf("Nome: ");
    fgets(TurmaLP[n].nome, sizeof(TurmaLP[n].nome), stdin);
    printf("Ra: ");
    scanf("%i", &TurmaLP[n].ra);
    printf("Frequencia: ");
    scanf("%i", &TurmaLP[n].freq);

    for (int c = 0; c < 3; c++)
    {
        printf("[%i] Nota: ",c);
        scanf("%f", &TurmaLP[n].nota[c]);
    }
    
}
int main()
{
    struct AlunosLP TurmaLP[5];

    int op, a;

    a = 0;

    do
    {
        Imprimir_menu();
        
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            if (a == 50)
            {
                printf("Turma já preenchida");
            }
            else
            {
                Inserir_aluno(TurmaLP, a);
                a++;
            }
            
        
        default:
            break;
        }

    } while (op != 5);
      
}