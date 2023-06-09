/*
Faça uma função que receba como entrada três strings (A, B e C) e retorne uma quarta string formada pela substituição de todas as ocorrências da string B pela string C dentro da string A
    Ex.: Se A=’Abra a porta para entrar para poder
    descansar calmamente’, B=’para’ e C=’e tente’, a
    resposta deve ser: ’Abra a porta e tente entrar e tente
    descansar calmamente’
*/
#include <stdio.h>
#include <string.h>

void substituir_string(char *A, const char *B, const char *C) {
    char *pos;
    int tamanhoB = strlen(B);
    int tamanhoC = strlen(C);
    int tamanhoA = strlen(A);
    int diferenca = tamanhoC - tamanhoB;
    int deslocamento = 0;
    
    while ((pos = strstr(A + deslocamento, B)) != NULL) {
        int posicao = pos - A;
        
        if (diferenca < 0) {
            memmove(pos + tamanhoC, pos + tamanhoB, tamanhoA - posicao - tamanhoB + 1);
        }
        
        memcpy(pos, C, tamanhoC);
        
        deslocamento = posicao + tamanhoC;
        tamanhoA += diferenca;
    }
}

int main() {
    char A[] = "Abra a porta para entrar para poder descansar calmamente";
    const char B[] = "para";
    const char C[] = "e tente";
    
    substituir_string(A, B, C);
    printf("%s\n", A);
    
    return 0;
}
