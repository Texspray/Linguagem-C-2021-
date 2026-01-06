#include <stdio.h>
#include <stdlib.h>

int main()
{
    float posicao_s0, velocidade_inicial, aceleracao, tempo, s;
    scanf("%f%f%f%f", &posicao_s0, &velocidade_inicial, &aceleracao, &tempo);
    s = posicao_s0+velocidade_inicial*tempo+(aceleracao*tempo*tempo)/2;
    printf("A distancia percorrida eh de %f\n", s);
    return 0;
}
