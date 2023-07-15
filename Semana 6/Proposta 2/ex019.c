/*
Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.
Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
    326 = 3 centenas, 2 dezenas e 6 unidades
    12 = 1 dezena e 2 unidades Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
*/
#include <stdio.h>

int main()
{
    int n,c,d,u,d1;
    
    printf("-----UNIDADE-----\n");
    printf("Digite um numero: ");
    scanf("%i",&n);
    printf("-----------------\n");
    
    while(n > 1000)
    {
        printf("[ERROR]\n[DIGITE UM NUMERO MENOR QUE 1000]\n");
        printf("-----------------\n");
        printf("Digite um numero: ");
        scanf("%i",&n);
    }
    
    c = n / 100;
    d = (n - c * 100) / 10;
    u = (n - c * 100) - d * 10;

    
    printf("Centena = [%i]\nDezena = [%i]\nUnidade = [%i]",c,d,u);
    printf("\n-----------------");

    

    return 0;
}
