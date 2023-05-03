#include <stdio.h>

int main()
{
    int n1,fat,c;
    char resposta;

    do
   {

    printf("----Fatorial----");
    printf("\nDigite um numero: ");
    scanf("%i",&n1);
    printf("----------------\n");

    while (n1 < 0 || n1 > 16)
    {
        printf("[ERRO]\n[Digite um numero positivo e menor que 16]");
        printf("\nDigite um numero: ");
        scanf("%i",&n1);
    }

    fat = n1;
    c = 1;

    while (fat > 0)
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

    printf("\n----------------");
    printf("\nDeseja calcular outro fatorial? (s/n): ");
    scanf(" %c", &resposta);
    
    

   
   
    
   } while (resposta == 's');

   printf("\nFim do programa");
   
        
    
   
   


}