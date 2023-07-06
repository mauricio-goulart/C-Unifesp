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

char *Strcpy(char e[],char d[])
{
    for (int c = 0; c < MAX; c++)
    {
        d[c] = e[c];
        if (e[c] == '\0')
        {
            break;
        }
        
    }
    return d;
}

int main()
{
    char nome[MAX],a[MAX],b[MAX],c[MAX],d[MAX];

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
    printf("\n--------------------------");
    printf("\nDigite algo: ");
    scanf("%s", c);
    printf("Copia = [%s]", Strcpy(c,d));

}