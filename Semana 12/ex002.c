#include <stdio.h>

int Fat(int n1)
{
    int fat = 1;

    for (int c = n1; c > 0; c--)
    {
        fat =  fat * c;  
    }
    
    return fat;
}

void Imprimir_menu()
{
    printf("---------------------------\n");
    printf("\tFATORIAL\n");
    printf("---------------------------\n");
}

int main()
{
    int n1;
    char cond;
    cond = 's';

    Imprimir_menu();


    do
    {
        printf("Digite um numero: ");
        scanf("%i", &n1);
        printf("---------------------------\n");

        printf("%i! ", n1);


        for (int c = n1; c > 0; c--)
        {
            printf("%i", c);
        
            if (c == 1)
            {
                printf("=");
            }
            else
            {
                printf("x");
            }
        
        }
    
        printf("%i", Fat(n1));

        
    } while (cond = 's');
    

  
    


    
}