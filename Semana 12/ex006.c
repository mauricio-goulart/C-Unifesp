#include <stdio.h>

void Imprimir_menu()
{
    printf("-------------------------\n");
    printf("\tFatorial\n");
    printf("-------------------------\n");

}

int Fatorial(int n1)
{
    int fat = 1;

    for (int c = n1 ; c > 0; c--)
    {
        fat = fat * c;
    }
    
    return fat;
}

int main()
{
    int n1, fat;

    Imprimir_menu();
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("-------------------------\n");

    fat = Fatorial(n1);

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

    printf("%i", fat);
    



    


}