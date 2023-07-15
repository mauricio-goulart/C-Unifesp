#include <stdio.h>

int soma(int n1)
{
    if (n1 == 1)
    {
        return 1;
    }

    return n1 + soma(n1 - 1);
    
}

int main()
{
    int n1;

    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Soma = [%d]\n", soma(n1));

    return 0;


}