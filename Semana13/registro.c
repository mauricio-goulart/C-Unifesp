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
    fgets(TurmaLP[n].nome,sizeof(TurmaLP[n].nome),stdin);
    TurmaLP[n].nome[strlen(TurmaLP[n].nome) - 1] = '\0';

    printf("Ra: ");
    scanf("%d", &TurmaLP[n].ra);
    getchar();

    printf("Frequencia: ");
    scanf("%d", &TurmaLP[n].freq);
    getchar();

    for (int c = 0; c < 3; c++)
    {
        printf("[%i] Nota: ",c + 1);
        scanf(" %f", &TurmaLP[n].nota[c]);
        getchar();
    }
    
}

int Consultar_aluno(struct AlunosLP TurmaLP[], int a)
{
    int ra;
    printf("------------------------------\n");
    printf(GREEN"Caso ja exista digite o RA do aluno: "RESET);
    scanf("%i", &ra);
    printf("------------------------------\n");
    getchar();

    for (int c = 0; c < a; c++)
    {
        if (TurmaLP[c].ra == ra)
        {
            return c;
        }
        
    }
    return -1;
}

void Mostrar_aluno(struct AlunosLP TurmaLP[], int c )
{
    printf("Nome: [%s]\n", TurmaLP[c].nome);
    printf("Ra: [%d]\n",TurmaLP[c].ra);
    printf("Frequencia: [%d]\n",TurmaLP[c].freq);

    for (int i = 0; i < 3; i++)
    {
        printf("[%i] Nota = [%d]\n", i + 1, TurmaLP[c].nota[i]);
    }
    printf("\n");
}

void Remover_aluno(struct AlunosLP TurmaLP[], int *a)
{
    if (*a == 0)
    {
        printf("Turma vazia.\n");
        return;
    }

    int ra;
    printf("Digite o RA do aluno a ser removido: ");
    scanf("%d", &ra);
    getchar();

    int posicao = -1;
    for (int i = 0; i < *a; i++)
    {
        if (TurmaLP[i].ra == ra)
        {
            posicao = i;
            break;
        }
    }

    if (posicao == -1)
    {
        printf("Aluno não encontrado.\n");
        return;
    }

    for (int i = posicao; i < *a - 1; i++)
    {
        strcpy(TurmaLP[i].nome, TurmaLP[i + 1].nome);
        TurmaLP[i].ra = TurmaLP[i + 1].ra;
        TurmaLP[i].freq = TurmaLP[i + 1].freq;
        for (int j = 0; j < 3; j++)
        {
            TurmaLP[i].nota[j] = TurmaLP[i + 1].nota[j];
        }
    }

    (*a)--;
    printf("Aluno removido com sucesso.\n");
}


void Mostrar_turma(struct AlunosLP TurmaLP[], int a)
{
    for (int c = 0; c < a; c++)
    {
        Mostrar_aluno(TurmaLP, c);
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
        getchar();

        switch (op)
        {
        case 1:
            if (a == 5)
            {
                printf("Turma já preenchida");
            }
            else
            {   
               
                
                if (Consultar_aluno(TurmaLP, a) == -1)
                {
                    Inserir_aluno(TurmaLP, a);
                    a++;
                }
                else
                {
                    printf("ALuno ja matriculado");
                }
                
             break; 
            }
            
        case 2:
            if (a == 0)
            {
                printf("Turma Vazia");
            }
            else
            {
                int aluno;

                aluno = Consultar_aluno(TurmaLP, a);

                Mostrar_aluno(TurmaLP, aluno); 
                

            }
            break;

        case 3:
            Remover_aluno(TurmaLP, &a);
            break;
        case 4:
            Mostrar_turma(TurmaLP, a);
        }
        

    } while (op != 5);
      
}