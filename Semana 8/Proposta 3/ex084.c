#include <stdio.h>

int main()
{
    int n;

    printf("----Vetores----\n");
    printf("Qual o tamanho dos vetores: ");
    scanf("%i",&n);
    printf("---------------\n");

    int a[n],b[n],soma[n];

    printf("Preencha o vetor A\n");
    printf("---------------\n");

    for (int c = 0; c < n; c++)
    {
        printf("%i*Valor\n",c + 1);
        printf("Numero: ");
        scanf("%i",&a[c]);
        printf("---------------\n");
    }

    printf("Preencha o vetor B\n");
    printf("---------------\n");

    for (int c = 0; c < n; c++)
    {
        printf("%i*Valor\n",c + 1);
        printf("Numero: ");
        scanf("%i",&b[c]);
        printf("---------------\n");
    }

    for (int c = 0; c < n; c++)
    {
        soma[c] = a[c] + b[c];
    }
    

    printf("Vetor da somas: ");
    
    for (int c = 0; c < n; c++)
    {
        printf(" %i",soma[c]);
    }
    
    

}