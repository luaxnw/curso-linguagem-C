/*
    Escreva um programa que leia as coordenadas x e y de pontos no R^2 e calcule sua
    distancia da origem (0, 0).
*/

#include <stdio.h>
#include <math.h>


int main(){

    double x = 0.0, y = 0.0, modulo = 0.0;

    printf("Informe x e y (x,y) \n");
    scanf("%lf,%lf", &x, &y);

    modulo = pow((x * x) + (y * y), 0.5);
    
    printf("Distancia origem (%.2lf,%.2lf) = %.2lf \n", x, y, modulo);
    
    
    return 0;

}

