#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resistencia, corrente, potencia;
    scanf("%f%f", &resistencia, &corrente);
    potencia = corrente*corrente*resistencia;
    printf("O valor da potencia eh %f\n", potencia);
    return 0;
}
