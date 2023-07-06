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

    for (int c = 0; c < MAX; c++)
    {
        if (a[c] == '\0')
        {
            break;
        }
        
        cont = cont + 1;
    }
    return cont;
}

int Strcmp(char a[],char b[])
{
    for (int c = 0; c < MAX; c++)
    {
        if (a[c] != b[c])
        {
            return 0;
        }
        if (a[c] == '\0' && b[c] == '\0')
        {
            return 1;
        }
    
        
    }
    
}

int main()
{
    char nome[MAX],a[MAX],b[MAX];

    Imprimir_menu();

    printf("Digite uma palavra: ");
    scanf("%s", nome);

    printf("Strlen = [%i]", Strlen(nome));
    printf("\n--------------------------");
    printf("\nDigite alguma coisa: ");
    scanf("%s", a);
    printf("Digite outra coisa: ");
    scanf("%s", b);
    printf("%i", Strcmp(a,b));


}