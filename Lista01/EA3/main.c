#include <stdio.h>
#include <stdlib.h>

int main()
{
    float carga, tempo, corrente;
    scanf("%f%f", &carga, &tempo);
    corrente = carga/tempo;
    printf("O valor da corrente eh %f\n", corrente);
    return 0;
}
