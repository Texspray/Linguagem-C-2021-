
#include <stdio.h>
#include <stdlib.h>


struct numeros_racio
{
    int denominador;
    int numerador;
};

int main()
{

    struct numeros_racio numeros;
    scanf("%d%d", &numeros.numerador, &numeros.denominador);
    printf("\n numerador eh: %d e o denominador eh: %d", numeros.numerador, numeros.denominador);
    return 0;
}
