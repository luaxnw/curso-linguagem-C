/*
Fac¸a um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Voce deve criar um menu com as duas opc¸ ˆ oes de convers ˜ ao e com uma opc¸ ˜ ao˜
para finalizar o programa. O usuario poder ´ a fazer quantas convers ´ oes desejar, sendo ˜
que o programa so ser ´ a finalizado quando a opc¸ ´ ao de finalizar for escolhida. 
*/

#include <stdio.h>

void kmHparaMs(int kmHora);
void msParaKmH(int metroSeg);

int main(){

    int kmHora = 0, metroSeg = 0;

    scanf("%i", &kmHora);
    scanf("%i", &metroSeg);

    kmHparaMs(kmHora);
    msParaKmH(metroSeg);

    
    


    
    return 0;
}

void kmHparaMs(int kmHora){
    double aux = 0;
    aux = kmHora * 1000.0;
    aux /= 3600.0;
    
    printf("Km/h: %i --> m/s: %.2f\n",kmHora, aux);
}

void msParaKmH(int metroSeg){
    double aux = 0;
    aux = metroSeg / 1000.0;
    aux *= 3600.0;
    
    printf("M/s: %i --> km/h: %.2f\n",metroSeg, aux);
    
}