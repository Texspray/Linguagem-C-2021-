#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, *p;
    x = 100;
    p = x;
    *p = x;
    printf("Valor de p: %d", *p);
    return 0;
}
