#include <stdio.h>
#include <stdlib.h>

int main()
{
    float potencia, corrente, tensao;
    scanf("%f%f", &tensao, &corrente);
    potencia = tensao*corrente;
    printf("O valor da potencia é %f\n", potencia);
    return 0;
}
