#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, Velocidade;
    scanf("%f", &tempo);
    Velocidade = 10*tempo;
    printf("A velocidade com uma aceleracao de 10 m/s² depois de %f segundos, eh de %f\n", tempo, Velocidade);
    return 0;
}
