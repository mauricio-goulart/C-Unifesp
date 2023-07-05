#include <stdio.h>
#define MAX 30

void Imprimir_menu()
{
    printf("--------------------------\n");
    printf("\tFUNCOES\n");
    printf("--------------------------\n");   
}

int Strlen(char a[])
{
    int cont = 0;

    for (int c = 0; c <= MAX; c++)
    {
        if (a[c] == '\0')
        {
            break;
        }
        
        cont = cont + 1;
    }
    return cont;
}

int main()
{
    char nome[MAX];

    Imprimir_menu();

    printf("Digite uma palavra: ");
    scanf("%s", nome);

    printf("%i", Strlen(nome));

}