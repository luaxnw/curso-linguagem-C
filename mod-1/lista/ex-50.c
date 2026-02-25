//implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include <stdio.h> 

int main()
{
    int idade = 0, anoAtual = 0;

    printf("Informe a idade e o ano atual: \n");
    scanf("%i %i", &idade, &anoAtual);

    printf("possivel ano de nascimento -> %i\n", (anoAtual - idade));


    return 0;
}
