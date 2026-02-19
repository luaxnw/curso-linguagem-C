/*
Receba a altura do degrau de uma escada e a altura que o usuario
deseja alcancar subindo a escada. Calcule e mostre quantos degraus o usuario devera subir para atingir seu objetivo.
*/

#include <stdio.h>


float mostraDegraus(float alturaDegrau, float alturaDesejada);


int main(){

    float alturaDegrau = 0.0;
    float alturaDesejada = 0.0;

    printf("Informe a altura do degrau e a altura desejeada: ");
    scanf("%f %f", &alturaDegrau, &alturaDesejada);

    printf("Quantidade de degraus conforme altura do degrau e altura desejada -> %.1f\n", mostraDegraus(alturaDegrau,alturaDesejada));
    

    return 0;
}

float mostraDegraus(float alturaDegrau, float alturaDesejada){

    return alturaDesejada / alturaDegrau;
    
}