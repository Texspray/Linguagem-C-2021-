#include <stdio.h>
#include <stdlib.h>

int MultiploF(int V, int K)
{
    if (K%V==0)
        return 1;
    else
        return 0;
}

int main()
{
    int V, K, Multiplo;
    scanf("%d%d", &V, &K);
    Multiplo = MultiploF(V, K);
    printf("\n%d\n", Multiplo);
    return 0;
}
