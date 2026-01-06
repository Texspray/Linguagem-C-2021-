#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, S;
    scanf("%f", &tempo);
    S = 10*tempo;
    printf("O valor percorrido a 10 m/s depois de %f segundos, eh de %f metros\n", tempo, S);
    return 0;
}
