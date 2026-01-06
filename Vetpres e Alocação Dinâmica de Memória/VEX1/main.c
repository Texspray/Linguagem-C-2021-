#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int tamanho, i;
    scanf("%d", &tamanho);
    v = (int *)malloc(tamanho*sizeof(int));
    for (i=0; i<tamanho; i++)
    {
        scanf("%d", &v[i] );
    }
    printf("\nO seu vetor tem tamnho de %d\n", tamanho);
    while (i>0)
    {
        printf("\nElemento %d do vetor eh %d\n",  (i), v[i-1]);
        i--;
    }
    free(v);
    return 0;
}
