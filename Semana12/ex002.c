#include <stdio.h>

void Imprimir_menu()
{
    printf("----------------------------\n");
    printf("\tDIVIDIR\n");
    printf("----------------------------\n");
}

int Dividir(int n1, int n2)
{
    int res = 0;
    
    for(int c = 1; c <= n2; c++)
    {
        res = res - n2;
    }
}

int main()
{

    int n1,n2;


    Imprimir_menu();
    
    printf("Digite o Dividendo: ");
    scanf("%i",&n1);
    printf("Digite o Divisior: ");
    scanf("%i",&n2);
    printf("----------------------------\n");
    
    printf("Resultado = [%i]", Dividir(n1,n2));

    
    return 0;
}
