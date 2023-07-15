/*
Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média
da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da
turma e o resultado da contagem.
*/
#include <stdio.h>

#define vet 20

int main()
{
    int maiorm = 0;
    float mediat = 0, alunos[vet];
    
    printf("------Media------\n");
    for(int c = 0; c < vet; c++)
    {
        printf("%i*Aluno\n", c+1);
        printf("Nota = ");
        scanf("%f",&alunos[c]);
        mediat = mediat + alunos[c];
        printf("-----------------\n");
    }
    for(int c = 0; c < vet; c++)
    {
        if(alunos[c] > mediat/3)
        {
            maiorm = maiorm + 1;
        }
    }
    
    
    
    
    
    printf("Media da turma = [%.2f]",mediat/3);
    printf("\nAlunos acima da media = [%i]",maiorm);
    return 0;
}
