#include <stdio.h>

int main()
{
    float n1,n2,n3,n4,media;
    printf("----Escola----\n");
    printf("1*Nota = ");
    scanf("%f",&n1);
    printf("2*Nota = ");
    scanf("%f",&n2);
    printf("3*Nota = ");
    scanf("%f",&n3);
    printf("4*Nota = ");
    scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
    printf("----Media----\n");
    printf("Media = [%.2f]\n",media);
    printf("-------------\n");
    printf("\n\nDigite enter para encerrar...");
    scanf("%i");



    return 0;
}