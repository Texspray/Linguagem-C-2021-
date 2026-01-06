#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float f1, f2, fx, fy, angulo1, angulo2, resultante;
    scanf("%f%f%f%f", &f1, &f2, &angulo1, &angulo2);
    resultante = sqrt(pow(f1*sin(angulo1)+f2*sin(angulo2), 2) + pow(f1*cos(angulo1)+f2*cos(angulo2), 2));
    printf("Ah resultante eh de %f\n", resultante);
    return 0;
}
