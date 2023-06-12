#include <stdio.h>

int main()
{
    char nome[30];

    printf("----STRING----\n");
    printf("Digite o seu nome: ");
    fgets(nome, 30, stdin);

    printf("Ola %s",nome);

    if (strlen(nome) > 0 && nome[strlen(nome)- 1] == '\n')
    {
        nome[strlen(nome) - 1] = '\0';
    }
    

    printf("%i",strlen(nome));

}