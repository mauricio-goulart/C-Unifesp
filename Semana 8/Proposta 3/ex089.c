/*
Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a
quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.
*/
#include <stdio.h>

int main()
{
    int v1[15],v2[15],soma=0;

    printf("Preencha o Vetor 1\n");
    printf("--------------------\n");

    for (int c = 0; c < 15; c++)
    {
        printf("%i*Valor\n", c + 1);
        printf("Numero: ");
        scanf("%i",&v1[c]);
        printf("--------------------\n");

    }

    printf("Preencha o Vetor 2\n");
    printf("--------------------\n");
    

    for (int c = 0; c < 15; c++)
    {
        printf("%i*Valor\n", c + 1);
        printf("Numero: ");
        scanf("%i",&v2[c]);
        printf("--------------------\n");

    }

    for (int c = 0; c < 15; c++)
    {
        if (v1[c] == v2[c])
        {
            soma = soma + 1;
        }
        
    }
    
    printf("Vezes que os numeros sao iguais: ");
    printf("%i",soma);

}