#include <stdio.h>
#include <string.h>

void Imprimir_menu()
{
    printf("-------------------------------\n");
    printf("\tSOMA DE VETOR\n");
    printf("-------------------------------\n");   
}

int Soma_vetor(int vetor[], int tam)
{
    if (tam == 0)
    {
        return 0;
    }

    return vetor[tam - 1] + Soma_vetor(vetor, tam - 1);   
}

int main()
{
    int tam;

    Imprimir_menu();
    printf("Tamanho do vetor: ");
    scanf("%i", &tam);

    int vetor[tam - 1];
    printf("-------------------------------\n");
    for (int c = 0; c < tam; c++)
    {
        printf("[%i] Valor: ", c + 1);
        scanf("%i", &vetor[c]);
    }

    printf("Soma = [%i]", Soma_vetor(vetor, tam));
    
    return 0;
    
}