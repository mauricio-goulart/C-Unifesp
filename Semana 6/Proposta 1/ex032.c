/*
Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:
    Fatorial de: 5
    5! =  5 . 4 . 3 . 2 . 1 = 120
*/
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
            printf(".");
        }
        
        c = c * fat;
        fat = fat - 1;
        
        
    }
    printf("%i",c);


}