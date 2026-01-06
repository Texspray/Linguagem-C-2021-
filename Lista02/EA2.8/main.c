#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, volume;
    scanf("%f", &raio);
    volume= (4*3.14*pow(raio,3))/3;
    printf("O volume da sua esfera eh de %f\n",volume);
    return 0;
}
