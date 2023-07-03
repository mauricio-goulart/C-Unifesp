/*
    Programa que faz bhaskara
*/
#include <stdio.h>

int main()
{
    float a,b,c,x1,x2,delta;

    printf("----Bhaskara----\n");
    printf("A = ");
    scanf("%f",&a);
    printf("B = ");
    scanf("%f",&b);
    printf("C = ");
    scanf("%f",&c);
    delta = pow(b,2) - 4*a*c;
    x1 = (-b + sqrt(delta)) / 2 * a;
    x2 = (-b - sqrt(delta)) / 2 * a;
    printf("----Delta----\n");
    printf("Delta = [%.2f]\n",delta);
    printf("----Bhaskara----\n");
    printf("X1 = [%.2f]\n",x1);
    printf("X2 = [%.2f]\n",x2);
    printf("----------------\n");




    

}