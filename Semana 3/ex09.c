#include <stdio.h>

int main()
{
    float f;
    printf("-------Conversor-------\n");
    printf("Graus em Fahrenheit = ");
    scanf("%f",&f);
    printf("-------Convertido-------\n");
    printf("Convertido e Celsius = [%.2f]\n",5*((f-32)/9));
    printf("------------------------");
    printf("\n\nDigite enter para encerrar...");
    scanf("%i");

    return 0;



}