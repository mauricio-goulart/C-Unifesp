#include <stdio.h>

void Imprimir_menu()
{
    printf("----------------------------------\n");
    printf("\tSOMANDO\n");
    printf("----------------------------------\n");
}

int Somando(int n1)
{
    int soma = 0;
    
    for (int c = 2; c < n1; c++)
    {
        soma = soma + c;
    }
    
    return soma;
}

int main()
{
    int n1,soma;

    Imprimir_menu();

    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("----------------------------------\n");

    soma = Somando(n1);
    printf("Soma = [%i]",soma);


    return 0;
}