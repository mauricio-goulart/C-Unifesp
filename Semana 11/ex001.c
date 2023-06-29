#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int tamanho, i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    printf("Palavra invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    
    printf("\n");

    return 0;
}
