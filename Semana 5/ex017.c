#include <stdio.h>

int main()
{
    int n1,fat,c;

    printf("----Fatorial----");
    printf("\nDigite um numero: ");
    scanf("%i",&n1);
    printf("----------------\n");
    printf("Calculando o fatorial de %i! = ",n1);

    fat = n1;
    c = 1;

    while (fat>0)
    {
        printf("%i",fat);
        if (fat == 1)
        {
            printf("=");
        }
        else
        {
            printf("x");
        }
        
        c = c * fat;
        fat = fat - 1;
        
        
    }
    printf("%i",c);


}