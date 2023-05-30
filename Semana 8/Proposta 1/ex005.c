#include <stdio.h>

int main()
{
   int numeros[20],par[20],impar[20],k,j;

   k = 0;
   j = 0;
   

    printf("----Vetores----\n");
    for (int c = 0; c < 20; c++)
    {
        printf("%i Numero: ", c+1);
        scanf("%i",&numeros[c]);
        printf("---------------\n");
    }


    for (int c = 0; c < 20; c++)
    {
        if (numeros[c] % 2 == 0)
        {
            par[k] = numeros[c];

            k++;
        }
        else
        {
            impar[j] = numeros[c];
            j++;
        }
        
    }
    
    printf("\nPar: ");
    for (int c = 0; c < k; c++)
    {
        printf("%i ",par[c]);
    }
    printf("\nImpar: ");
    for (int c = 0; c < j; c++)
    {
        printf("%i ",impar[c]);
    }
    printf("\nNumeros: ");
    for (int c = 0; c < 20; c++)
    {
        printf("%i ",numeros[c]);
    }
    
    

}