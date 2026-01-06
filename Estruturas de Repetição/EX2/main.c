#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contador, i;
    scanf("%d", &n);
    i = 1;
    contador = 2*i-1;
    while (contador<n)
    {

        printf("%d " , contador);
        i++;
        contador = 2*i-1;

    }

    return 0;
}

