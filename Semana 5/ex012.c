/*
Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada.
*/
#include <stdio.h>

int main()
{
    int n1;
    
    printf("----Tabuada----\n");
    printf("Numero para a tabuada: ");
    scanf("%i",&n1);
    printf("---------------\n");

    for (size_t i = 0; i < 11; i++)
    {
        printf("%i x %2d = [%i]\n",n1,i,n1*i);
    }
     printf("---------------\n");

}