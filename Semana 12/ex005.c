#include <stdio.h>


void Imprimir_menu()
{
    printf("--------------------------------------\n");
    printf("\tPRIMO\n");
    printf("--------------------------------------\n");


}

int Primo(int n1)
{
    if (n1 < 2)
    {
        return 0;
    }
    else if (n1 > 1)
    {
        for ( int c = 2; c < n1; c++)
        {
            if (n1 % c == 0)
            {
                return 0;
            }
        }
    }
    else
    {
        return 1;
    }
    
    
        
        
            
            
        
        
    return 0;
}


int main()
{
    int n1,primo;

    Imprimir_menu();

    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    primo = Primo(n1);

    if (primo)
    {
        printf("--------------------------------------\n");
        printf("Numero primo\n");
    }
    else
    {
        printf("--------------------------------------\n");
        printf("Nao e primo");
    }
    
    return 0;
}