#include <stdio.h>
#include <stdlib.h>

int main()
{
    float volume, l1, l2;
    scanf("%f%f", &l1, &l2);
    volume=(0.11/9.5)*l1*l2;
    printf("Os metros cubicos de areia eh de %f\n", volume);
    return 0;
}
