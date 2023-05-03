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
        printf("%i x %i = [%i]\n",n1,i,n1*i);
    }
     printf("---------------\n");

}