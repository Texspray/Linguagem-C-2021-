#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resistencia, tensao, potencia;
    scanf("%f%f", &resistencia, &tensao);
    potencia = (tensao*tensao)/resistencia;
    printf("O valor da potencia eh %f\n", potencia);
    return 0;
}
