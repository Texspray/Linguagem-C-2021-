#include <stdio.h>
#include <stdlib.h>

int ParOuImpar(int x)
{
    if (x%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int inteiro, x;
    scanf("%d", &inteiro);
    x = ParOuImpar(inteiro);
    printf("\n%d\n", x);
    return 0;
}
