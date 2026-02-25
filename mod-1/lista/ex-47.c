/*
Leia um numero inteiro de 4 d ´ ´ıgitos (de 1000 a 9999) e imprima 1 d´ıgito por linha.
*/

#include <stdio.h>

int main()
{

    int numeroUsuario = 0, aux = 0;

    printf("Informe um número de 4 dígitos para imprimir linha por linha: ");
    scanf("%i", &numeroUsuario);

    if (numeroUsuario < 1000 || numeroUsuario > 9999){
        printf("Numero invalido.\n");
        return 1;
    }

    while (numeroUsuario > 0)
    {
        aux = numeroUsuario % 10;
        numeroUsuario /= 10;
        

        printf("%i\n", aux);
    }
    

    return 0;
}