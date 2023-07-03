/*
Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X.
Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após,
imprimir o vetor M.
*/
#include <stdio.h>

int main()
{
    float A[9],B[9];
    int x;

    printf("-----Vetores-----\n");

    printf("Digite o valor do termo X: ");
    scanf("%i",&x);
    printf("-----------------\n");



    for (int c = 0; c < 10; c++)
    {
        printf("%i*Valor",c + 1);
        printf("\nNumero: ");
        scanf("%f",&A[c]);
        printf("-----------------\n");
    }

    for (int c = 0; c < 10; c++)
    {
        B[c] = A[c] * x;
    }

    for (int c = 0; c < 10; c++)
    {
        printf(" %.f",B[c]);
    }
    
    
    
}