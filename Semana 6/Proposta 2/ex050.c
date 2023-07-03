/*
    Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H com N termos.
*/
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