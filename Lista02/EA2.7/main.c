#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b , c, raiz1, raiz2;
    scanf("%f%f%f", &a, &b, &c);
    raiz1 =(-b+sqrt(b*b-4*a*c))/(2*a);
    raiz2 =(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("As raizes dessa equacao sao %f e %f!\n", raiz1, raiz2);
    return 0;
}
