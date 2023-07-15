/*
    Faça um programa que mostre o maior número.
*/
#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Digite um numero: ");
    scanf("%i",&n1);
    printf("Digite outro numero: ");
    scanf("%i",&n2);
    printf("-----------------------");
    if (n1 > n2){
        printf("\nMaior = [%i]",n1);
        printf("\nMenor = [%i]",n2);
    }

    else{
        printf("\nMaior = [%i]",n2);
        printf("\nMenor = [%i]",n1);

    }

    printf("\n-----------------------");






}