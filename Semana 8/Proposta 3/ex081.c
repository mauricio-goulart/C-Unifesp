/*
O mesmo exercício anterior, mas agora deve escrever o menor elemento do vetor e a respectiva
posição dele nesse vetor.
*/
#include <stdio.h>

#define COR_VERMELHO "\x1b[31m"
#define COR_RESET "\x1b[0m"



int main()
{
    float v[19], menor;
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

        if (c == 0 || v[c] < menor)
    {
        menor = v[c];
        p = c;
    }
    }

    printf("Menor numero = [%.2f]\n",menor);
    printf("Posicao vetor = [%i]",p);


    
    

    return 0;
}
