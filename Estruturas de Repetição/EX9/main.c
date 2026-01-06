#include <stdio.h>
#include <stdlib.h>


int MultiploF(int V, int K)
{
    if (V%K==0)
        return 1;
    else
        return 0;
}
int main()
{
    int x, y, contador, teste;
    scanf("%d%d", &x, &y);
    if (x>y)
    {

        contador = y;
        while (contador<=x)
        {
            teste = MultiploF(x, contador);
            if (teste==1)
            printf("\n%d", contador);
            contador++;
        }
    }
    else{
        if (y>x)
        {
            contador = x;
            while (contador<=y)
            {
                teste = MultiploF(y, contador);
                if (teste == 1)
                printf("\n%d", contador);
                contador++;
            }
        }
    }
    return 0;
}
