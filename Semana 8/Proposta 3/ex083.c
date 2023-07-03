/*
Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20
números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.
*/
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