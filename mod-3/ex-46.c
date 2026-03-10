/*
Fac¸a um programa que gera um numero aleat ´ orio de 1 a 1000. O usu ´ ario deve tentar ´
acertar qual o numero foi gerado, a cada tentativa o programa dever ´ a informar se o ´
chute e menor ou maior que o n ´ umero gerado. O programa acaba quando o usu ´ ario ´
acerta o numero gerado. O programa deve informar em quantas tentativas o n ´ umero foi ´
descoberto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000
#define MIN 100

int main()
{

    srand(time(NULL));
    int randomNum = (rand() % (MAX - MIN + 1)) + MIN;
    int userNum = 0;

    while (1)
    {
        printf("N: ");
        scanf("%i", &userNum);

        if (userNum > randomNum)
            printf("%i é maior que o alvo!\n", userNum);
        else if (userNum < randomNum)
            printf("%i é menor que o alvo!\n", userNum);
        else
        {
            printf("acertou!\nN dado -> %i\nN aleatório -> %i\n", userNum, randomNum);
            break;
        }
    }

    return 0;
}