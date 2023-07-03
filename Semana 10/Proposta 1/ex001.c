/*
Dada uma matriz mat de inteiros com 4 x 5 elementos,faça um algoritmo para somar os elementos de cada linha gerando o vetor somalinha. Em seguida, some os valores dos elementos do vetor em uma vari ́avel total, que deve ser impressa ao final.
*/
#include <stdio.h>

int main()
{
    int matriz[4][5], somalinha[4] = {0}, somat = 0;

    printf("Preencha o vetor\n");
    printf("--------------------\n");

    for ( int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            printf("Preencha [%i][%i]: ", l,c);
            scanf("%i",&matriz[l][c]);
        }
        
        printf("\n");
    }
    printf("--------------------\n");
    printf("Matriz\n");
    printf("--------------------\n");


    
    for ( int l = 0; l < 4; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            somalinha[l] = somalinha[l] + matriz[l][c];
            printf("%i",matriz[l][c]);
            
        }
        
        printf("\n");
    }
    printf("--------------------\n");

    for (int c = 0; c < 4; c++)
    {
        printf("Soma da linha [%i] = [%i]\n",c,somalinha[c]);
        somat = somat + somalinha[c];
    }
    
    printf("--------------------");
    printf("\nSoma de todas as linhas = [%i]",somat);
    printf("\n--------------------");


    

    
    
}

