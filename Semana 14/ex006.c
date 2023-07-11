#include <stdio.h>

int Potencia(int k, int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return k * Potencia(k, n - 1);
}

int main()
{
    int k,n;
    printf("Valor de k: ");
    scanf("%i", &k);
    printf("Valor de n: ");
    scanf("%i", &n);
    printf("Resultado = [%i]\n", Potencia(k,n));
}