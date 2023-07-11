#include <stdio.h>

int Somar(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + Somar(n - 1);
    
}

int main()
{
    int n; 

    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("\nSoma de 1 a %i = [%i]\n", n,Somar(n) );
}