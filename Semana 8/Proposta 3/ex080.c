#include <stdio.h>

#define COR_VERMELHO "\x1b[31m"
#define COR_RESET "\x1b[0m"



int main()
{
    float v[3], maior = 0;
    int p = 0;
    
    printf("-----Contador-----\n");
    for(int c = 0; c < 3; c++)
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

    printf("Maior numero = [%f]\n",maior);
    printf("Posicao vetor = [%i]",p);


    
    

    return 0;
}
