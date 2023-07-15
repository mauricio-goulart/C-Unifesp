/*
Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram.
*/
#include <stdio.h>

#define TAMANHO_VETOR 3

int main()
{
    int VET[TAMANHO_VETOR];
    int repetidos[TAMANHO_VETOR] = {0}; 
    int temRepetido = 0; 

    printf("Preencha o vetor VET:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("VET[%d]: ", i);
        scanf("%d", &VET[i]);
    }

    printf("\nNúmeros repetidos nas seguintes posições:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        for (int j = i + 1; j < TAMANHO_VETOR; j++)
        {
            if (VET[i] == VET[j])
            {
                temRepetido = 1;
                repetidos[i] = 1; 
                repetidos[j] = 1; 
            }
        }
    }

    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (repetidos[i] == 1)
        {
            printf("Número %d na posição %d\n", VET[i], i);
        }
    }

    if (!temRepetido)
    {
        printf("Não há números repetidos no vetor VET.\n");
    }

    return 0;
}
