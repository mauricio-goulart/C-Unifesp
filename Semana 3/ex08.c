#include <stdio.h>

int main()
{
    float salario;
    int horas;
   printf("---Bem-vindo-Trabalhador---\n");
   printf("[R$ por hora]: ");
   scanf("%f",&salario);
   printf("[Horas/mes]: ");
   scanf("%i",&horas);
   printf("---------------------------\n"); 
   printf("Salario/mes = [R$%.2f]\n",salario*horas);
   printf("---------------------------\n"); 

   return 0;

}