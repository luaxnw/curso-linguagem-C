/*Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
• a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total)
*/

#include <stdio.h>
#include <string.h>

void calculoJuros(float x);
void calculoAVista(float x);

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("usage %s\n", argv[0]);
		return 1;
	}

	float valorTotal = 0.0;

	if (strcasecmp(argv[1], "juros") == 0)
	{
		printf("Valor de venda: ");
		scanf("%f", &valorTotal);
		calculoJuros(valorTotal);
		return 0;
	}

	if (strcasecmp(argv[1], "vista") == 0)
	{
		printf("Valor de venda: ");
		scanf("%f", &valorTotal);
		calculoAVista(valorTotal);
		return 0;
	}

	else
	{
		printf("Usage %s\n", argv[0]);
		return 1;
	}

	return 0;
}

void calculoJuros(float x)
{
	float resultado = (x / 3);
	float comissao = x * 0.05;

	for (int i = 0; i < 3; i++)
		printf("Parcela %i --> %.2f\n", i, resultado);
	printf("Comissao - > %.2f\n", comissao);
}

void calculoAVista(float x)
{
	float resultado = x - (x * 0.1);
	float comissao = resultado * 0.05;
	printf("Valor com desconto -> %.2f\nComissao -> %.2f\n", resultado, comissao);
}