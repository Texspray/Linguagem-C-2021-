#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f1x, f1y, R;
    scanf("%f%f", &f1x, &f1y);
    R = sqrt(f1x*f1x+f1y*f1y);
    printf("A força resultante eh de %f\n", R);
    return 0;
}
