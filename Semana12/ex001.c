#include <stdio.h>

void Imprimir_menu()
{
    printf("----------------------------\n");
    printf("\tMULTIPLICAR\n");
    printf("----------------------------\n");
}

int Multiplicar(int n1, int n2)
{
    int res = 0;
    
    for(int c = 1; c <= n2; c++)
    {
        res = res + n1;
    }
    
    return res;
}




int main()
{

    int n1,n2;


    Imprimir_menu();
    
    printf("Digite um numero: ");
    scanf("%i",&n1);
    printf("Digite outro numero: ");
    scanf("%i",&n2);
    printf("----------------------------\n");
    
    printf("Resultado = [%i]", Multiplicar(n1,n2));

    
    return 0;
}
