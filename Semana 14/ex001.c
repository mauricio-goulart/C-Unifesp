#include <stdio.h>

int fat(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fat(n - 1);
    
}

int main()
{
    int n;
    printf("Fatorial de qual numero: ");
    scanf("%i", &n);
    printf("%i\n", fat(n));
}