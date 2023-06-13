#include <stdio.h>
#include <string.h>

int main()
{
    char a[30], b[30], c[60];

    printf("----String----\n");
    printf("Digite alguma coisa: ");
    fgets(a, sizeof(a), stdin);
    printf("Digite outra coisa: ");
    fgets(b, sizeof(b), stdin);

    if (a[strlen(a) - 1] == '\n')
    {
        a[strlen(a) - 1] = '\0';
    }

    if (b[strlen(b) - 1] == '\n')
    {
        b[strlen(b) - 1] = '\0';
    }

    printf("----Resultado----\n");
    printf("Vetor a = [%s]\n", a);
    printf("Vetor b = [%s]\n", b);

    int length_a = strlen(a);
    int length_b = strlen(b);
    int i, j, k;

    i = j = k = 0;

    while (i < length_a && j < length_b)
    {
        c[k++] = a[i++];
        c[k++] = b[j++];
    }

    while (i < length_a)
    {
        c[k++] = a[i++];
    }

    while (j < length_b)
    {
        c[k++] = b[j++];
    }

    c[k] = '\0';

    printf("Vetor c = %s\n", c);

    return 0;
}
