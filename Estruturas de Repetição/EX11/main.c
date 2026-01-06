#include <stdio.h>
#include <stdlib.h>


int MultiploF(int K, int V)
{
    if (K%V==0)
        return 1;
    else
        return 0;
}
int main()
{
    int x, y, contador, teste, soma;
    soma = 0;
    scanf("%d%d", &x, &y);
    if (x>y)
    {

        contador = y;
        while (contador<=x)
        {
            teste = MultiploF(x, contador);
            if (teste==1)
               soma+=contador;
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
                soma+=contador;
                contador++;

            }
        }
    }
    printf("A soma dos numeros multiplos de K eh: %d", soma);
    return 0;
}
