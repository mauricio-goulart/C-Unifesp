/*
Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do
maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/
#include <stdio.h>

#define COR_VERMELHO "\x1b[31m"
#define COR_RESET "\x1b[0m"



int main()
{
    float v[19], maior = 0;
    int p = 0;
    
    printf("-----Contador-----\n");
    for(int c = 0; c < 20; c++)
    {
        printf("%i*Posicao\n",c + 1);
        printf("Valor: ");
        scanf("%f",&v[c]);
        printf("------------------\n");
        
        while(v[c] < 0)
        {
            printf(COR_VERMELHO"[ERROR]\n"COR_RESET"[DIGITE NUMEROS POSITIVOS!]\n");
            printf("Valor: ");
            scanf("%f",&v[c]);
        }

        if (v[c] > maior)
    {
        maior = v[c];
        p = c;
    }
    }

    printf("Maior numero = [%.2f]\n",maior);
    printf("Posicao vetor = [%i]",p);


    
    

    return 0;
}
