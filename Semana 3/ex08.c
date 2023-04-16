#include <stdio.h>

int main()
{
    float salario;
    int horas,enc;
   printf("---Bem-vindo-Trabalhador---\n");
   printf("[R$ por hora]: ");
   scanf("%f",&salario);
   printf("[Horas/mes]: ");
   scanf("%i",&horas);
   printf("---------------------------\n"); 
   printf("Salario/mes = [R$%.2f]\n",salario*horas);
   printf("---------------------------\n"); 
   printf("\n\nDigite um numero e enter para encerrar...");
   scanf("%i",enc);

   return 0;

}