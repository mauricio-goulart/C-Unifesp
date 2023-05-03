#include <stdio.h>

int main()
{
    int n1,fat,c,cond;
    printf("----Fatorial----");
    printf("\nDigite um numero: ");
    scanf("%i",&n1);
    printf("----------------\n");

    while (n1 > 16 || n1 <0)
    {
        printf("[ERRO]\n[Digite um numero positivo e menor que 16]");
        printf("\nDigite um numero: ");
        scanf("%i",&n1);
    }

    fat = n1;
    c = 1;
    cond = 1;   
    
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

    
    
    
    
        
    
   


}