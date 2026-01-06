#include <stdio.h>
#include <stdlib.h>
#define _PI 3.141592
float CircunferenciaC (float x)
{
    return x*x*_PI;
}

float CalculaVolumeCilindro (float x, float y)
{
    return _PI*x*x*y;
}

int main()
{
    float raio, altura, area, volume;
    scanf("%f%f", &raio, &altura);
    area = CircunferenciaC(raio);
    volume = CalculaVolumeCilindro(raio, altura);
    printf("A areada base e %f, e o volume do cilindro e %f\n", area, volume);
    return 0;
}
