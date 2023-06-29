#include <stdio.h>

void Imprime_cabelhaco()
{
    printf("-----------------------------\n");
    printf("\tCALCULADORA\n");
    printf("-----------------------------\n");
}

void Imprime_menu()
{
    printf("[1] ADICAO\n");
    printf("[2] SUBTRACAO\n");
    printf("[3] MULTIPLICACAO\n");
    printf("[4] DIVISAO\n");
    printf("-----------------------------\n");
}

int main()
{
    int n1,n2,op;
    char cond;

    cond = 'n';

    Imprime_cabelhaco();

    do
    {
        printf("Digite um numero: ");
        scanf("%i", &n1);
        printf("Digite outro numero: ");
        scanf("%i", &n2);
        printf("-----------------------------\n");

        Imprime_menu();

        printf("Digite sua opcao: ");
        scanf("%i", &op);

        switch ()
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
        

    } while (cond == 'n');
    

}