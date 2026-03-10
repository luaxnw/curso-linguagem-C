/*
Fac¸a um programa que apresente um menu de opc¸oes para o c ˜ alculo das seguintes ´
operac¸oes entre dois n ˜ umeros: ´
• adic¸ao (opc¸ ˜ ao 1) ˜
• subtrac¸ao (opc¸ ˜ ao 2) ˜
• multiplicac¸ao (opc¸ ˜ ao 3) ˜
• divisao (opc¸ ˜ ao 4). ˜
• sa´ıda (opc¸ao 5) ˜
O programa deve possibilitar ao usuario a escolha da operac¸ ´ ao desejada, a exibic¸ ˜ ao do ˜
resultado e a volta ao menu de opc¸oes. O programa s ˜ o termina quando for escolhida a ´
opc¸ao de sa ˜ ´ıda (opc¸ao 5).
*/

#include <stdio.h>

void soma(double a, double b);
void subtracao(double a, double b);
void multipli(double a, double b);
void divisao(double a, double b);

int main()
{

    int opcaoUser = 0;
    double valor1 = 0, valor2 = 0;

    while (1)
    {
        printf("- Adição (opção 1)\n- subtração (opção 2)\n- multiplicação (opção 3)\n- divisão (opção 4)\n- saída (opção 5)\n");
        scanf("->%i", &opcaoUser);

        switch (opcaoUser)
        {
        case 1:
            printf("Informe os dois valores da operação: ");
            scanf("%lf %lf", &valor1, &valor2);
            soma(valor1, valor2);
            break;
        case 2:
            printf("Informe os dois valores da operação: ");
            scanf("%lf %lf", &valor1, &valor2);
            subtracao(valor1, valor2);
            break;
        case 3:
            printf("Informe os dois valores da operação: ");
            scanf("%lf %lf", &valor1, &valor2);
            multipli(valor1, valor2);
            break;
        case 4:
            printf("Informe os dois valores da operação: ");
            scanf("%lf %lf", &valor1, &valor2);
            divisao(valor1, valor2);
            break;
        default:
            break;
        }

        if (opcaoUser == 5)
            break;
    }

    return 0;
}

void soma(double a, double b)
{
    double resultado = a + b;
    printf("soma entre %f e %f = %f\n", a, b, resultado);
}

void subtracao(double a, double b)
{
    double resultado = a - b;
    printf("subtração entre %f e %f = %f\n", a, b, resultado);
}
void multipli(double a, double b)
{
    double resultado = a * b;
    printf("multiplicação entre %f e %f = %f\n", a, b, resultado);
}
void divisao(double a, double b)
{
    double resultado = a / b;
    printf("divisão entre %f e %f = %f\n", a, b, resultado);
}