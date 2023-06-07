#include <stdio.h>

int main()
{
    int matriz[4][5];

    printf("Preencha o vetor\n");
    printf("--------------------\n");

    for ( int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("Preencha:[%i][%i]", l,c);
        }
        
        printf("\n");
    }
    
    
    
    
}

