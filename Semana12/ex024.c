#include <stdio.h>

void Imprimir_menu()
{
    printf("-------------------------\n");
    printf("\tCOMBINACOES\n");
    printf("-------------------------\n");
}

int Fatorial(int n)
{
    int fat = 1;

    for (int c = n; c > 0; c--)
    {
        fat = fat * c;
    }
    
    return fat;
}

int main()
{
    int n,r,c;
    Imprimir_menu();

    printf("Termo [N]: ");
    scanf("%i", &n);
    printf("Termo [R]: ");
    scanf("%i", &r);

    c = Fatorial(n) / (Fatorial(r) * (n - r));

    printf("%i",c);

    return 0;
}