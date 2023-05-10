#include <stdio.h>

int main()
{
    int t,a,tot;

    tot = 0;

    printf("-----CONFIG-TURMA-----\n");
    printf("Numero turmas: ");
    scanf("%i",&t);
    printf("----------------------\n");
    
    for (int c = 1;c <= t; c++)
    {
        printf("--[%i]-TURMA--\n",c);
        printf("Alunos: ");
        scanf("%i",&a);
        
        if (a > 40)

        {
            while (a > 40)
            {
                printf("----------------------\n");
                printf("[ERROR]\n[Numero maximo de alunos = (40)]\n");
                printf("----------------------\n");
                printf("Alunos: ");
                scanf("%i",&a);
            }
            
        }
        tot = tot + a;
        printf("----------------------\n");

    }

    printf("MEDIA DE ALUNOS POR TURMA = [%i]",tot/t);
    
    
}