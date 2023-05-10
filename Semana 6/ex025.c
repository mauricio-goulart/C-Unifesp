#include <stdio.h>

int main()
{
    int n, i, m;
    m = 0;
    printf("--------Cadastro--------\n");
    printf("Deseja cadastrar quantas pessoas: ");
    scanf("%i", &n);


    if (n < 0)
    {
        while (n < 0 )
        {
            printf("------------------------\n");
            printf("[ERRO]\n");
            printf("[Digite um numero positivo !]\n");
            printf("------------------------\n");
            printf("Deseja cadastrar quantas pessoas: ");
            scanf("%i",&n);
        }
        
    
    }
    printf("------------------------\n");

    for ( int c = 1; c <= n; c++)
    {
        printf("%i Pessoa\n",c);
        printf("Idade: ");
        scanf("%i",&i);
        printf("------------------------\n");
        m = m + i;

    }
    printf("Media de idade = [%i]\n",m/n);
    if (m/n > 0 && m/n <= 25)
    {
        printf("GRUPO = [JOVEM]");
    }

    if (m/n > 25 && m/n <= 60)
    {
        printf("GRUPO = [ADULTO]");
    }
    if (m/n > 60)
    {
        printf("GRUPO = [IDOSO]");
    }
    
    
    
    




}