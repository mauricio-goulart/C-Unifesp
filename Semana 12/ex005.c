#include <stdio.h>

void Imprimir_menu()
{
    printf("--------------------------------------\n");
    printf("\tPRIMO\n");
    printf("--------------------------------------\n");
}

int Primo(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return  1;
    }
    
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    
    return 1;
}

int main()
{
    int n, primo;

    Imprimir_menu();

    printf("Digite um número: ");
    scanf("%i", &n);
    
    primo = Primo(n);

    if (primo)
    {
        printf("--------------------------------------\n");
        printf("É um número primo.\n");
    }
    else
    {
        printf("--------------------------------------\n");
        printf("Não é primo.\n");
    }
    
    return 0;
}
