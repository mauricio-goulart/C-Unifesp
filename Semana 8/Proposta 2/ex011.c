#include <stdio.h>

#define TAMANHO_VETOR 10

int main()
{
    int vetor1[TAMANHO_VETOR];
    int vetor2[TAMANHO_VETOR];
    int vetorInterpolado[TAMANHO_VETOR * 2];

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

    int j = 0; 
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        vetorInterpolado[j++] = vetor1[i];
        vetorInterpolado[j++] = vetor2[i];
    }

    printf("\nVetor interpolado:\n");
    for (int i = 0; i < TAMANHO_VETOR * 2; i++)
    {
        printf("%d ", vetorInterpolado[i]);
    }
    printf("\n");

    return 0;
}
