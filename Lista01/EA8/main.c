#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilometros, tempo_hora, combustivel, velocidade_media, eficiencia;
    scanf("%f%f%f", &kilometros, &tempo_hora, &combustivel);
    velocidade_media = kilometros/tempo_hora;
    eficiencia = combustivel/kilometros;
    printf("A velocidade eh de %f\nA eficiencia eh de %f\n", velocidade_media, eficiencia);
    return 0;
}

