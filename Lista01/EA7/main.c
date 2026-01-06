#include <stdio.h>
#include <stdlib.h>

int main()
{
    int megabyte, bits;
    scanf("%d", &megabyte);
    bits = megabyte*1024*1024*8;
    printf("O valor em bits eh %d\n", bits);
    return 0;
}
