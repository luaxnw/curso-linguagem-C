// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

#include <stdio.h>

int main()
{

    int numeroUsuario = 0, horas = 0, minutos = 0, segundos = 0;

    printf("Informe segundos para transformar em horário: \n");
    scanf("%i", &numeroUsuario);

    horas = numeroUsuario / 3600;
    minutos = (numeroUsuario % 3600) / 60;
    segundos = (numeroUsuario % 3600) % 60;

    printf("horas: %i\nminutos: %i \nsegundos: %i\n", horas, minutos, segundos);

    return 0;
}