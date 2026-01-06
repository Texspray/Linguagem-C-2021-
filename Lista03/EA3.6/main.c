#include <stdio.h>
#include <stdlib.h>

int main()
{
    float volume, pressao, temperatura, massa;
    scanf("%f%f%f", &pressao, &volume, &temperatura);
    massa = (pressao*volume)/0.37*(temperatura+460);
    printf("A massa de ar eh de %f\n", massa);
    return 0;
}
