/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
    -quanto pagou ao INSS.
    - quanto pagou ao sindicato.
    - o salário líquido.
    - calcule os descontos e o salário líquido
*/
#include <stdio.h>

int main()
{
    float r,tots,ir,in,sin,liq;
    int horas,enc;
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
    printf("\n\nDigite um numero e enter para encerrar...");
    scanf("%i",enc);

    return 0;





}