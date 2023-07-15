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

int Somar(int n1, int n2)
{
    return n1 + n2;
}

int Subtracao(int n1, int n2)
{
    return n1 - n2;
}

int Multiplicacao(int n1, int n2)
{
    return n1 * n2;
}

int Divisao(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    int n1,n2,op;
    char cond;

    cond = 's';

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
        printf("-----------------------------\n");


        switch (op)
        {
        case 1:
            printf("ADICAO = [%i]\n", Somar(n1,n2));
            break;
        case 2:
            printf("SUBTRACAO = [%i]\n", Subtracao(n1,n2));
            break;
        case 3:
            printf("MULTIPLICACAO = [%i]\n", Multiplicacao(n1,n2));
            break;
        case 4:
            printf("DIVISAO = [%i]\n", Divisao(n1,n2));
            break;
        }
        
        printf("Quer continuar? [S/n]");
        scanf(" %c", &cond);
        printf("-----------------------------\n");
        
        

    } while (cond == 's');
    

}