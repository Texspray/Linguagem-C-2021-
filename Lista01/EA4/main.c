#include <stdio.h>
#include <stdlib.h>

int main()
{
    float trabalho, carga, tensao;
    scanf("%f%f", &trabalho, &carga);
    tensao = trabalho/carga;
    printf("O valor da tensão eh %f\n", tensao);
    return 0;
}
