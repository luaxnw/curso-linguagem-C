/*
    Tres amigos jogaram na loteria. Caso eles ganhem, o premio deve ser repartido
    porcionalmente ao valor que cada deu para a realizacao da aposta. Faca um programa
    que leia quanto cada apostador investiu, o valor do premio, e imprima quanto cada um
    ganharia do premio com base no valor investido.
*/

#include <stdio.h>

float calculaParte(float totalInves, float premio, float invPessoa);
void printaPartes(float pessoas[3]);

int main()
{

    float valor1 = 0, valor2 = 0, valor3 = 0, valorPremio = 0;
    float parte1 = 0, parte2 = 0, parte3 = 0;
    float pessoas[3];

    printf("investimento da pessoa 1, 2 e 3\n");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    float totalInves = valor1 + valor2 + valor3;

    printf("Valor premio: \n");
    scanf("%f", &valorPremio);

    pessoas[0] = calculaParte(totalInves, valorPremio, valor1);
    pessoas[1] = calculaParte(totalInves, valorPremio, valor2);
    pessoas[2] = calculaParte(totalInves, valorPremio, valor3);

    printaPartes(pessoas);

    return 0;
}

float calculaParte(float totalInves, float premio, float invPessoa)
{

    float k = (premio / totalInves);

    return (k * invPessoa);
}

void printaPartes(float pessoas[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Parte pessoa%i: %.2f\n", i + 1, pessoas[i]);
    }
    return;
}