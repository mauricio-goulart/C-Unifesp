#include <stdio.h>

int main()
{
    char p[30];
    int cont = 0;

    printf("----STRING----\n");
    printf("Digite algo: ");
    fgets(p, 30, stdin);

    for (int c = 0; c < 30; c++)
    {

        if (p[c] == '\n')
        {
            break;
        }
        

        if (p[c] == 'a')
        {
            p[c] = 'b';
            cont = cont + 1;
        }
        
    }
    

    printf("--------------\n");
    printf("Resultado = %s",p);
    printf("\nVezes alterado = [%i]",cont);

    

}