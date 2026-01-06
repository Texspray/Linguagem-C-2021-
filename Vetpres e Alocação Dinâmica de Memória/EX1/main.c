#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int  n_elementos, tipo;
    printf("Digite a quantidade de elementos a serem armazenados na memória\n");
    scanf("%d", &n_elementos);
    printf("Digite o tipo dos elementos que vão ser armazenados na memória (1=char 2=int 3=float 4=double)\n");
    scanf("%d", &tipo);

    switch (tipo)
    {
    case 1:
        p =(int *)malloc(n_elementos*sizeof(char));
        printf("O endereço de memoria do vetor eh %x", *p);
        break;
    case 2:
        p =(int *)malloc(n_elementos*sizeof(int));
        printf("O endereço de memoria do vetor eh %x", *p);
        break;
    case 3:
        p =(int *)malloc(n_elementos*sizeof(float));
        printf("O endereço de memoria do vetor eh %x", *p);
        break;
    case 4:
        p =(int *)malloc(n_elementos*sizeof(double));
        printf("O endereço de memoria do vetor eh %x", *p);
        break;

    }

    return 0;
}
