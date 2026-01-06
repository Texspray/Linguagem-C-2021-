#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Farheinheit, Celsius;
    scanf("%f", &Farheinheit);
    Celsius = ((5*(Farheinheit-32))/9);
    printf("O valor em Celsius eh de %f\n", Celsius);
    return 0;
}
