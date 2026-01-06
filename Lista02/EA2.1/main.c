#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Celsius, Farheinheit;
    scanf("%f", &Celsius);
    Farheinheit = ((9*Celsius)/5) + 32;
    printf("A temperatura em Farheint eh de %f\n", Farheinheit);
    return 0;
}
