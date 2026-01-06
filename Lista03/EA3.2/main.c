#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hora, minutos, segundos;
    scanf("%f%f",&hora, &minutos);
    segundos = (hora*60*60)+minutos*60;
    printf("Os segundos decorridos de hoje eh %f", segundos);
    return 0;
}
