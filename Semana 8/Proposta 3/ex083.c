#include <stdio.h>

int main()
{
    int v[19];

    printf("----Vetor----\n");

    for (int c = 0; c < 20; c++)
    {
        printf("%i*Valor\n",c + 1);
        printf("Numero: ");
        scanf("%i",&v[c]);
        printf("-------------\n");
    }

    printf("Ordem inversa do vetor: ");

    for (int c = 19; c >= 0; c--)
    {
        printf(" %i",v[c]);
    }
    
    
}