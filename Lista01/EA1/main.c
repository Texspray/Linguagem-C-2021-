#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resistencia, corrente, tensao;
    scanf("%f%f", &resistencia, &corrente);
    tensao = resistencia*corrente;
    printf("O valor da tensão é %f\n", tensao);
    return 0;
}
