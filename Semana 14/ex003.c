#include <stdio.h>

int fib(int n)
{
    if (n < 3)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
    
}

int main()
{
    int n;

    printf("Qual termo de fibonnaci: ");

    scanf("%i", &n);

    printf("Fibonnaci = [%i]\n", fib(n));

}