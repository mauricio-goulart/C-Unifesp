#include <stdio.h>

int main()
{
    int ano[364],menor, maior = 0, soma = 0,i =0;
    srand(time(NULL));



    for (int c = 0; c < 365; c++)
    {
        ano[c] = rand() % 44 + 1;
    }
    
    for (int c = 0; c < 365; c++)
    {
        if (ano[c] > maior)
        {
            maior = ano[c];
        }
        
    }

    for (int c = 0; c < 365; c++)
    {
        if (c == 0 || ano[c] < menor)
        {
            menor = ano[c];
        }
        
    }

    for (int c = 0; c < 365; c++)
    {
        soma = ano[c] + soma;
    }

    for (int c = 0; c < 365; c++)
    {
        if (ano[c] < soma/365)
        {
            i = i + 1;
        }
        
    }

    printf("Analisa da temperatura anual\n");
    printf("------------------------------\n");
    printf("Maior temperatura = [%i]\n",maior);
    printf("Menor temperatura = [%i]\n",menor);
    printf("Media da temperatura = [%i]\n",soma/365);
    printf("Dias inferiores a media = [%i]\n",i);
    printf("------------------------------\n");

    

    
}