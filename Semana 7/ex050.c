#include <stdio.h>

int main()
{
    int t;

    float h;

    h = 0;
  

    

    printf("-----CONTADORA-----\n");
    printf("Digite o numero de termos: ");
    scanf("%i",&t);
    printf("-------------------\n");

    for (int c = 1; c <= t; c++)
    {
        h = h + 1.0/c;
    }

    printf("[%i]Termos = [%f]\n",t,h);
    printf("-------------------\n");
    



}