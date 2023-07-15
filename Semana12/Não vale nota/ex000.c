#include <stdio.h>


void imprimir_nome(char nome[])
{
    printf("%s", nome);
}

int main()
{
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s",&nome);

    imprimir_nome(nome);

    return 0;
}