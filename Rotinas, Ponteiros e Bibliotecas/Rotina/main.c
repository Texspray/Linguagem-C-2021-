#include <stdio.h>
#include <stdlib.h>
#include "operacoes_a.h"

int main()
{
    float x, y, s;
    scanf("%f%f", &x, &y);
    s = soma(x, y);
    printf("A divisao e %f\n", s);
    return 0;
}
