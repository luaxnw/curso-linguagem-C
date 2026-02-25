/*
Faca um programa que leia um numero inteiro positivo de tres dıgitos (de 100 a 999).
Gere outro numero formado pelos dıgitos invertidos do numero lido.
*/

#include <stdio.h>

int main()
{
    int numeroUser = 0, resultado = 0, resto = 0;
    printf("Informe um numero para ser invertido: ");
    scanf("%i", &numeroUser);

    while (numeroUser > 0)
    {
        resto = (numeroUser % 10);
        resultado = resultado * 10 + resto;
        
        numeroUser /= 10;
    }
    printf("\n%i - ", resultado);

    return 0;
}