#include <stdio.h>

void Imprimir_menu()
{
    printf("--------------------------\n");
    printf("\tPOTENCIA\n");
    printf("--------------------------\n");
}

int Potencia(int n1,int n2)
{
    int res = 1;
    for(int c = 0; c < n2; c++)
    {
        res = res * n1;
    }
    
    return res;
}

int main()
{
    int n1,n2;
    
    Imprimir_menu();
    
    printf("Digite a base: ");
    scanf("%i", &n1);
    printf("DIgite o expoente: ");
    scanf("%i", &n2);
    printf("--------------------------\n");
    printf("Resultado = [%i]",Potencia(n1,n2));
    

}