#include <stdio.h>

int main()
{
    int t, m;
    float s,soma,n;

    n = 1;
    m = 1;
    soma = 0;

    printf("-----Termos-----\n");
    printf("Digite o numero de termos: ");
    scanf("%i",&t);
    printf("----------------\n");

    for (int c = 1; c <= t; c++)
    {
        soma = soma + n/m;
        m = m + 2;
        n = n + 1;
    }
    printf("Soma = %.2f\n",soma);
    printf("----------------\n");

}