/*
    Faca um programa para converter uma letra maiuscula em letra minuscula. Use a tabela
    ASCII para resolver o problema
*/

#include <stdio.h>

int main()
{
    char maiuscula, minuscula;
    printf("Informe uma letra maiuscula para transformar em minuscula: ");
    scanf("%c", &maiuscula);

    if (maiuscula >= 'A' && maiuscula <= 'Z')
    {
        minuscula = maiuscula + 32;
        printf("Conversao realizada: %c\n", minuscula);
    }
    

    else
    {
        printf("Sem sucesso\n");
    }

    return 0;
}
