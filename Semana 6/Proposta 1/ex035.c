/*
Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos números primos existentes entre 1 e um número inteiro informado pelo usuário.
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Numeros primos entre 1 e %d:\n", n);
    for (i = 2; i <= n; i++) {
        int eh_primo = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                eh_primo = 0;
                break;
            }
        }
        if (eh_primo) {
            printf("%d ", i);
        }
    }

    return 0;
}