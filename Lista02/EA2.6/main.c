#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, distancia;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    distancia = sqrt(pow(x1-x2, 2)+ pow(y1-y2, 2));
    printf("A distancia entre os pontos eh %f\n", distancia);
    return 0;
}
