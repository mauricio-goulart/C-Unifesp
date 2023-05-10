#include <stdio.h>

int main()
{
    int e,v,l,b,c,i ;

    l = 0;
    b = 0;
    c = 0;
    i = 0;

    printf("--------CONFIG-URNA---------\n");
    printf("Numeros de eleitores: ");
    scanf("%i",&e);
    printf("----------------------------\n");

    for (int c = 1;c<=e;c++)
    {
        printf("[%i] ELEITOR\n",c);
        printf("----------------------------\n");
        printf("LULA = 13\nBOLSONARO = 22\nCIRO GOMES = 12\n");
        printf("----------------------------\n");
        printf("VOTO: ");
        scanf("%i",&v);

        if (v == 13)
        {
            l = l + 1;
        }

        if (v == 22)
        {
            b = b + 1;
        }
        
        if (v == 12)
        {
            c = c + 1;
        }

        if (v != 13 && v != 12 && v != 22)
        {
            i = i + 1;
        }
        
        
        
    }
    printf("--------RESULTADO--------\n");
    printf("VOTOS LULA = [%i]\n",l);
    printf("VOTOS BOLSONARO = [%i]\n",b);
    printf("VOTOS CIRO GOMES = [%i]\n",c);
    printf("VOTOS INDEFERIDOS = [%i]\n",i);



}