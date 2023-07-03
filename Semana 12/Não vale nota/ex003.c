#include <stdio.h>
#include <math.h>

int main()
{
    int fib, n;

    scanf("%i",&n);

    fib = (pow(1.61803, n) - pow(-1.61803, -n)) / sqrt(5);

    printf("\n%i",fib);


}