#include <stdio.h>

int main() {
    int n1, fat, c, cond;
    char resposta;

    do {
        printf("----Fatorial----\n");
        printf("Digite um numero inteiro positivo e menor que 16: ");
        scanf("%i", &n1);

        while (n1 > 16 || n1 < 0) {
            printf("[ERRO] O numero deve ser positivo e menor que 16.\n");
            printf("Digite um numero inteiro positivo e menor que 16: ");
            scanf("%i", &n1);
        }

        fat = n1;
        c = 1;
        cond = 1;

        while (fat > 0) {
            printf("%i", fat);
            if (fat == 1) {
                printf("=");
            } else {
                printf("x");
            }

            c = c * fat;
            fat = fat - 1;
        }

        printf("%i\n", c);

        printf("Deseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's');

    printf("Fim do programa.\n");

    return 0;
}