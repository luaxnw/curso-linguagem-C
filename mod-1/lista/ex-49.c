/*
Faca um programa para leia o horario (hora, minuto e segundo) de inicio e a duracao, em
segundos, de uma experiencia biologica. O programa deve resultar com o novo horario
(hora, minuto e segundo) do termino da mesma.
*/

#include <stdio.h>

int main()
{
    int horas = 0, minutos = 0, segundos = 0, tempoExp = 0;

    printf("Informe o horario de inicio da experiencia (h:m:s):\n");
    scanf("%i:%i:%i", &horas, &minutos, &segundos);

    printf("Informe o tempo em segundos da duracao da experiencia:\n");
    scanf("%i", &tempoExp);

    if (horas >= 24 || minutos >= 60 || segundos >= 60)
    {
        printf("Horario informado incorreto. \n");
        return 1;
    }

    horas += tempoExp / 3600;
    minutos += (tempoExp % 3600) / 60;
    segundos += (tempoExp % 3600) % 60;

    printf("fim da experiencia em %i:%i:%i\n", horas, minutos, segundos);

    return 0;
}