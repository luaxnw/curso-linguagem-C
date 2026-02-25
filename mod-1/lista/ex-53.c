/*
Fac¸a um programa para ler as dimensoes de um terreno (comprimento ˜ c e largura l),
bem como o prec¸o do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.
*/

#include <stdio.h>

void valorFinal(float compri, float largura, float preco);

int main()
{
    float c = 0, l = 0, p = 0;
    float aux[3];

    printf("Forneça medidas em metros e reais!\n");

    printf("Informe o comprimento do terreno, largura e o valor do metro da tela: \n");
    scanf("%f %f %f", &c, &l, &p);

    aux[0] = c;
    aux[1] = l;
    aux[2] = p;

    for (int i = 0; i < 3; i++){
        if (aux[i] <= 0){
            printf("Informe valores maiores que zero. \n");
            return 1;
        }
    }

    valorFinal(l,c,p);

    return 0;
}

void valorFinal(float compri, float largura, float preco){
    float valorFinal = ((compri + largura) * 2) * preco;
    printf("Valor final -> %.2f\n", valorFinal);

}