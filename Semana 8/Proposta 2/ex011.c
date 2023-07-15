/*
    Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
*/
#include <stdio.h>

#define TAMANHO_VETOR 10

int main()
{
    int vetor1[TAMANHO_VETOR];
    int vetor2[TAMANHO_VETOR];
    int vetor3[TAMANHO_VETOR];
    int vetorInterpolado[TAMANHO_VETOR * 3];

    printf("Preencha o primeiro vetor com %d elementos:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\nPreencha o segundo vetor com %d elementos:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    printf("\nPreencha o terceiro vetor com %d elementos:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Vetor3[%d]: ", i);
        scanf("%d", &vetor3[i]);
    }

    int j = 0; // Variável auxiliar para controlar a posição do vetor interpolado
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        vetorInterpolado[j++] = vetor1[i];
        vetorInterpolado[j++] = vetor2[i];
        vetorInterpolado[j++] = vetor3[i];
    }

    printf("\nVetor interpolado:\n");
    for (int i = 0; i < TAMANHO_VETOR * 3; i++)
    {
        printf("%d ", vetorInterpolado[i]);
    }
    printf("\n");

    return 0;
}
