#include <stdio.h>

#define TAMANHO_VETOR 30

int main()
{
    int vetor[TAMANHO_VETOR];
    int numero, quantidade = 0;

    printf("Preencha o vetor com %d números:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        if (vetor[i] == numero)
        {
            quantidade++;
        }
    }

    printf("O número %d aparece %d vezes no vetor.\n", numero, quantidade);

    return 0;
}
