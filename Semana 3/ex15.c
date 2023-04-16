#include <stdio.h>

int main()
{
    float r,tots,ir,in,sin,liq;
    int horas;
    printf("----Bem-Vindo-Trabalhador----\n");
    printf("[R$/h] = ");
    scanf("%f",&r);
    printf("[H/m] = ");
    scanf("%i",&horas);
    tots = r*horas;
    ir = (tots*11)/100;
    in = (ir*8)/100;
    sin= (in*5)/100;
    liq = tots - (ir+in+sin);
    printf("-----------------------------\n");
    printf("+ Salario Bruto = [%.2f]\n",tots);
    printf("- IR (11%) = [%.2f]\n",ir);
    printf("- INSS (8%) = [%.2f]\n",in);
    printf("- SINDICATO (5%) = [%.2f]\n",sin);
    printf("= Salario Liquido = [%.2f]\n",liq);
    printf("-----------------------------\n");
    printf("\n\nDigite enter para encerrar...");
    scanf("%i");

    return 0;





}