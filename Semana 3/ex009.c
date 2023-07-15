/*
Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.

C = 5 * ((F-32) / 9).
*/
#include <stdio.h>

int main()
{
    float f;
    int enc;
    printf("-------Conversor-------\n");
    printf("Graus em Fahrenheit = ");
    scanf("%f",&f);
    printf("-------Convertido-------\n");
    printf("Convertido e Celsius = [%.2f]\n",5*((f-32)/9));
    printf("------------------------");
    printf("\n\nDigite um numero e enter para encerrar...");
    scanf("%i",enc);

    return 0;



}