/*
Escreva uma função que receba um número inteiro e retorne o inverso desse número. Por exemplo,
se a função receber 123456 deve retornar 654321.
*/
#include <stdio.h>
#include <string.h>

void Imprimir_menu()
{
    printf("-------------------------------------------\n");
    printf("\tInverter String\n");
    printf("-------------------------------------------\n");
}

void Inverter()
{
    char n1[30];
    printf("Digite um numero: ");
    scanf("%s", n1);

    int l = strlen(n1);

    for (int c = l; c >= 0; c--)
    {
        printf("%c",n1[c]);
    }
    

}

int main()
{
    Imprimir_menu();

    Inverter();
}
