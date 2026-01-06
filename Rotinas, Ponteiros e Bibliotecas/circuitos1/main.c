#include <stdio.h>
#include <stdlib.h>
#include "circuitos.h"

int main()
{
    float x, y, tensao;
    scanf("%f%f", &x, &y);
    tensao = tensao1(x, y);
    printf("O valor do potencial eh de %f\n", tensao);
    return 0;
}
