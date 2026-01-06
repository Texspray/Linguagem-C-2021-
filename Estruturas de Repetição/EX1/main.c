#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contador;
    scanf("%d", &n);
    contador = n;
    while (contador>0)
    {
        printf("%d " , contador);
        contador--;
    }

    return 0;
}
